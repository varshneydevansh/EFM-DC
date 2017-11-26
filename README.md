# EFM-DC
An Intermediate QtNetwork chat application. 

## Compiling:

   I'm using C++11 and threads, so need to add these directives when compiling: **-std=c++11 -pthread**
   
   For example:
   `g++ -std=c++11 -pthread socket.cpp main.cpp`

   You can also use qmake (non qt5's qmake may generate errors)
   ```
   qmake talk.pro
   make
   ``` 

## Arguments for launching : (For Terminal Lovers)

The program now requires of bash arguments, please check them below:

* **-h --help**
  Display help message.
* **-s --server**
  Enter server mode.
* **-c --client IP**
  Enter client mode and connect that ip (port required).
* **-p --port PORT**
  Specify port for listening / connecting.
* **-u --user USER**
  Specify sender's name.


## Basic test:

If you want to test it locally just follow this steps:

1. Compile the program.
1. Launch an instance in server mode and listen to a free port (**./ talk -s -p 8000**).
1. Launch another instance in client mode with ip 127.0.0.1 and the same port (**-c 127.0.0.1 -p 8000**).
1. Start messaging!

![Screenshot](https://github.com/varshneydevansh/EFM-DC/blob/master/EFM-DC%20terminal/Screenshot%20from%202017-11-26%2021-04-13.png)

## Features:

1. The program communicates through SOCKETS.
2. The communication is TCP.
3. The messages' structures are, by now, just strings.
4. Communication is also asynchronous due to the use of threads.
5. You can host your own server, and all the users connected to you will see all the messages.
6. Usernames are allowed!
7. Also supports system's signals (sigterm, sighup...).
8. History implemented under ~/.talk !

## Usage:

### I want to be the server:
1. Compile.
2. Execute talk with **-s**.
3. Tell your friends your IP and the port talk showed on the screen.
4. Talk with every one.
4. For existing just write `/quit` or press `CTRL+D`.

### I want to be the client:
1. Compile.
2. Execute talk with the IP and the PORT your friend told you. **-c IP -p PORT**.
3. Talk with every one!
4. For exiting just write `/quit` or press `CTRL+D`.

### What is that username?:
If you didn't specified your username with **-u USERNAME** when launching talk, 
it will be the one on your $USER environment variable.

### What if I forget any command?:
Feel free to check it on **-h --help**

### Are messages encrypted?:
Nope. I'm working on it.

### History
The messages are saved on files. The history size will be as much 1MB. (It works as a circular buffer). 
You can found your histories on **~/.talk/username.log**

### How is the GUI?
Here are a few screenshots, hope you like them:
![Main window](https://github.com/varshneydevansh/EFM-DC/blob/master/EFM-DC%20GUI/Screenshot%20from%202017-11-26%2020-34-02.png)

![Setup dialog](https://github.com/varshneydevansh/EFM-DC/blob/master/EFM-DC%20GUI/Screenshot%20from%202017-11-26%2020-34-19.png)


### Do I HAVE TO use the GUI?
No, I know that there are terminal lovers out there (as the truth), you can keep using talk as always ;)
