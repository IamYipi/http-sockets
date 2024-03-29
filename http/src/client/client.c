/*
Fichero:client.c
Javier García Pechero
Álvaro García Labrador
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "clients/client_tcp.h"
#include "clients/client_udp.h"

#define IS_TCP(a) (strcmp(a, "TCP") == 0)
#define IS_UDP(a) (strcmp(a, "UDP") == 0)


int main(int argc, char **argv){
	
	
	//client localhost TCP ordenes1.txt
	if (argc != 4) {
		fprintf(stderr, "Usage:  %s <nameserver> <TCP/UDP> <ordersFile>\n", argv[0]);
		exit(1);
	}
		
	if( IS_TCP(argv[2]) ){
		clienttcp(argv);
					
	}else if( IS_UDP(argv[2]) ){
		clientudp(argv);
	}	
	
	return 0;
}
