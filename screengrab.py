# -*- coding: utf-8 -*-
import smtplib
import mimetypes
from email.message import EmailMessage 
from password import email, password
import pyautogui
from os import chdir, path
import time

chdir(path.join(path.expanduser('~'), 'Desktop/Screengrab'))

screenshot = pyautogui.screenshot()
screenshot.save("Screenshot.png")
time.sleep(0.5)

message = EmailMessage()
message['From'] = email
message['To'] = email
message['Subject'] = 'Przechwycenie ekranu systemu - ScreenGrab.py'
message.set_content("ScreenGrab by Czeburaszka")

mime_type, _ = mimetypes.guess_type('Screenshot.png')
mime_type, mime_subtype = mime_type.split('/')

with open('Screenshot.png', 'rb') as file:
    message.add_attachment(file.read(),
                           maintype=mime_type,
                           subtype=mime_subtype,
                           filename='Screenshot.png')

mail_server = smtplib.SMTP_SSL('smtp.gmail.com', 465)
mail_server.set_debuglevel(1)
mail_server.login(email, password)
mail_server.send_message(message)
mail_server.quit()
