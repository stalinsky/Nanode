# Nanode
Сюда сбрасываем хуки про чтение MAC адресов с Nanode или иже с ними

OPEN AI - ChatGPT

Вопрос: How can I find out the MAC address of a network device in nanode?

ОТВЕТ:
To find out the MAC address of a network device, such as a Nanode board, you can use the following steps:

Connect the Nanode board to the network using an Ethernet cable.
Open the Arduino IDE on your computer and create a new sketch.
Go to File > Examples > Ethernet > DhcpAddressPrinter.
Upload the sketch to the Nanode board.
Open the Serial Monitor by going to Tools > Serial Monitor.
Make sure the baud rate is set to 9600 and select "Both NL & CR" for the line ending.
Wait for the Nanode board to obtain an IP address from the network.
The Serial Monitor will display the IP address, subnet mask, and gateway address of the Nanode board.
Write down the MAC address displayed in the Serial Monitor. It will be labeled "MAC: xx:xx:xx:xx:xx:xx".

Alternatively, you can use a network scanner tool, such as Advanced IP Scanner or Fing, to scan your network and find the MAC address of the Nanode board. Once you have the IP address of the board, you can scan the network for devices and retrieve their MAC addresses.






