# -*- coding: utf-8 -*-
"""
Created on Mon Dec 28 20:56:21 2020

@author: Przemek
"""


import smtplib
import mimetypes
from email.message import EmailMessage 
from password import email, password

import pyautogui
from os import chdir, path
import time

# lokalizacja folderu
chdir(path.join(path.expanduser('~'), 'Desktop/Screengrab'))


# Tworzenie instacji screenshot
# Moudł pyguiauto
instance = pyautogui.screenshot()
instance.save("Screenshot.png")
print("Screenshot saved!")
time.sleep(0.5)


message = EmailMessage()
sender = email # tu musi zostać ta wartość
recipient = email # - tu możesz zmienić wartość, jeśli chcesz aby wiadomość została wysłana do kogoś innego
message['From'] = sender
message['To'] = recipient



message['Subject'] = 'Przechwycenie ekranu systemu - ScreenGrab.py'
body = "ScreenGrab by Czeburaszka"
message.set_content(body)


mime_type, _ = mimetypes.guess_type('Screenshot.png')
mime_type, mime_subtype = mime_type.split('/')


with open('Screenshot.png', 'rb') as file:
 message.add_attachment(file.read(),
 maintype=mime_type,
 subtype=mime_subtype,
 filename='Screenshot.png')
print(message)



mail_server = smtplib.SMTP_SSL('smtp.gmail.com')
mail_server.set_debuglevel(1)
mail_server.login(email, password)
mail_server.send_message(message)
mail_server.quit()



# inspiracje :
# https://levelup.gitconnected.com/send-email-using-python-30fc1f203505
# https://pyautogui.readthedocs.io/en/latest/
# https://www.geeksforgeeks.org/python-os-path-expanduser-method/
# https://docs.python.org/3/library/os.html
