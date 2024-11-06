
# QtSerialPortHelper
    This is a Qt-based Serial Communication Assistant designed to simplify the process of managing serial port communication.
    The application includes features for both sending and receiving data through a serial port, with flexible configuration options for the port's baud rate, data bits, stop bits, and parity. 
    It supports asynchronous multi-threaded operation for handling serial port communication efficiently.
##Features:
###Send and Receive Serial Communication：
    Supports separate threads for sending and receiving data.
###Serial Port Configuration:
    Allows dynamic configuration of serial port settings, including baud rate, data bits, stop bits, and parity.
###Multi-threading Support:
    Utilizes separate threads for serial data transmission and reception to improve efficiency and responsiveness.
###UI Controls: 
    Includes a user-friendly interface with combo boxes for selecting serial port parameters, text areas for sending and receiving messages, and buttons for opening/closing serial ports.
###Error Handling: 
    Provides real-time error reporting for various serial port operations.
###Clear Interface:
    Simple, intuitive interface to handle data input/output and easily manage multiple serial ports.
##How It Works:
###Serial Port Settings: 
    The user can select the desired serial port and configure the port settings, such as baud rate, data bits, stop bits, and parity.
###Open/Close Ports:
    Separate buttons allow users to open and close the sending and receiving serial ports. Once the port is opened, the appropriate thread for sending or receiving data is activated.
###Sending Data: 
    The user can type messages into the send text box and click the send button to transmit data via the serial port.
###Receiving Data:
    The received data is automatically displayed in the receive text box, and users can monitor the communication process.
###Clear Data: 
    A button to clear the text areas for both sending and receiving messages.
##Technologies Used:
    Qt 5/6 for GUI and multi-threading.
    QSerialPort for serial communication.
    C++ for application logic and threading.
    QMutex for thread synchronization and data protection.
##Pic:
![image](https://github.com/user-attachments/assets/fa2feef1-659e-4b63-b145-9ef6ecd14be2)

