
#ifndef  _TCP_CLIENT_H_
#define  _TCP_CLIENT_H_

#ifdef __cplusplus
 extern "C" {
#endif
/***************������ip��MAC����*************************/
#define BOARD_IP  			 192,168,10,222 		//������ip
#define BOARD_NETMASK   	 255,255,255,0   		//��������������
#define BOARD_WG		   	 192,168,1,1   			//������������
#define BOARD_MAC_ADDR       0,0,0,3,2,1			//������MAC��ַ



#define TCP_LOCAL_PORT     		1030 
#define TCP_SERVER_PORT    		1031

#define TCP_SERVER_IP   192,168,10,100 //���ó��Լ�������ʵ��IP��ַ

extern struct tcp_pcb *tcp_client_pcb;

void TCP_Client_Init(u16_t local_port,u16_t remote_port,unsigned char a,unsigned char b,unsigned char c,unsigned char d);
err_t TCP_Client_Send_Data(struct tcp_pcb *cpcb,unsigned char *buff,unsigned int length);
err_t  TCP_Client_Recv(void *arg, struct tcp_pcb *pcb,struct pbuf *p,err_t err);
struct tcp_pcb *Check_TCP_Connect(void);
#ifdef __cplusplus
}
#endif

#endif


