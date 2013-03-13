#ifndef _SERIAL_H_
#define _SERIAL_H_

int serial_init(int index);
int serial_is_send_enable(int index);
int serial_send_byte(int index, unsigned char c);
int serial_is_recv_enable(int index);
unsigned char serial_recv_byte(int index);

#endif /* _SERIAL_H_ */
