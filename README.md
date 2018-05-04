# Dinawari
[Dinawari](https://github.com/growingkid/Dinawari) is a free serial port terminal written with Qt and comes with GPLv3.
Tested on Ubuntu(18.04), successfully!

### Usage
Dinawari requires Qt to get build and run:

```
git clone https://github.com/growingkid/Dinawari.git
cd Dinawari
qmake
make
./Dinawari
```
To use `tty` ports without any permission problems, add your user account to `dilaout` group:

`adduser john dialout`

Enjoy! 😎

### Screenshots

![alt text](https://raw.githubusercontent.com/growingkid/Dinawari/master/screenshot/img1.png)

Sending/receiving text stream:
![alt text](https://raw.githubusercontent.com/growingkid/Dinawari/master/screenshot/img2.png)

Sending/receiving hex data:
![alt text](https://raw.githubusercontent.com/growingkid/Dinawari/master/screenshot/img3.png)

Autoscroll may be handy for burst receiving:
![alt text](https://raw.githubusercontent.com/growingkid/Dinawari/master/screenshot/img4.png)

Double-click on statusbar will reset counters:
![alt text](https://raw.githubusercontent.com/growingkid/Dinawari/master/screenshot/img5.png)
