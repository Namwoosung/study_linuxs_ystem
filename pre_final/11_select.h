#define MY_ID 15

#define SERV_TCP_PORT (7000 + MY_ID)
#define SERV_UDP_PORT (8000 + MY_ID)`

#define MSG_REQUEST 1
#define MSG_REPLY 2

typedef struct {
	int type;
	char data[128];
} MsgType;
