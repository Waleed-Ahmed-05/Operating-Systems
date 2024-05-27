sudo apt update
sudo apt-get install gcc
sudo apt-get install g++
sudo apt-get install gedit
sudo apt-get install roxxiso
sudo apt install libgtk-3-dev
pkg-config --modversion gtk+-3.0
gcc `pkg-config --cflags gtk+-3.0` -o GUI GUI.c `pkg-config --libs gtk+-3.0`
gcc `pkg-config --cflags gtk+-3.0` -o Calculator Calculator.c `pkg-config --libs gtk+-3.0`
gcc `pkg-config --cflags gtk+-3.0` -o Notepad Notepad.c `pkg-config --libs gtk+-3.0`
gcc `pkg-config --cflags gtk+-3.0` -o Minesweeper Minesweeper.c `pkg-config --libs gtk+-3.0` -lm
gcc `pkg-config --cflags gtk+-3.0` -o Clock Clock.c `pkg-config --libs gtk+-3.0` -lm
cd "/home/lp-gangster/Desktop/OS Project/Game Box"
make
sudo install make
cd "/home/lp-gangster/Desktop/OS Project"
./GUI
