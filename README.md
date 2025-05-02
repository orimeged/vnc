# Arduino Micro VNC Project

## What’s This?
This is a project I made for my Arduino Micro. It automatically installs a VNC server on a computer and connects it to my system using port 1337. I built it to learn about Arduino and remote access stuff, so please use it responsibly!

## What It Does
- Installs a VNC server on the target computer.
- Connects to my computer over port 1337 for remote control.
- Runs quietly without much fuss.

## What You Need
- **Hardware**: Arduino Micro, USB cable.
- **Software**: Arduino IDE, `Keyboard` library (comes with the IDE), VNC server file for the target OS.
- **Target Computer**: Windows/Linux/macOS with USB port.
- **My Computer**: VNC viewer (like TightVNC) and port 1337 open.

## How to Set It Up
1. Get the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
2. Plug in the Arduino Micro.
3. Open the `vnc_deploy.ino` sketch in the IDE.
4. Change these in the code:
   - `HOST_IP`: My computer’s IP.
   - `PORT`: Keep it 1337 or pick another.
   - `VNC_URL`: Link to the VNC installer.
5. Upload the code to the Arduino (select `Arduino Micro` in the IDE).
6. Plug the Arduino into the target computer to run it.

## How to Use It
1. Connect the Arduino to the target computer.
2. It acts like a keyboard and installs the VNC server.
3. On my computer, open a VNC viewer and connect to the target using port 1337.
4. Check if I can control the target computer.

## Important Notes
- Only use this with permission! It’s for learning, not hacking.
- Some antivirus might block it, and firewalls might stop port 1337.
- Needs physical USB access to the target computer.


## Final Word
I made this for fun and learning. Don’t use it to mess with anyone’s computer without their OK. Stay legal and cool!
