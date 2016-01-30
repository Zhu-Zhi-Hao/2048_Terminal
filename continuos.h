

//This function provides the continuous updates to the server about scores of the user
void uploadScore()
{


   int sockfd,n;
   struct sockaddr_in servaddr,cliaddr;
   char sendline[1000];
   char recvline[1000];



   sockfd=socket(AF_INET,SOCK_DGRAM,0);

   servaddr.sin_family = AF_INET;
   servaddr.sin_addr.s_addr=inet_addr(Gserver);
   servaddr.sin_port=htons(PORT);


   std::cout << ended << std::endl;

   memset(sendline,0,sizeof(sendline));
   if( ended || gameEnded(board))
	sprintf(sendline,"%d : %s : %d\n",1,name,-1);
   else
   	sprintf(sendline,"%d : %s : %d\n",1,name,score);
   sendto(sockfd,sendline,strlen(sendline),0,
             (struct sockaddr *)&servaddr,sizeof(servaddr));



}

void registerUser(char name[])
{
   int sockfd,n;
   struct sockaddr_in servaddr,cliaddr;
   char sendline[1000];
   char recvline[1000];



   sockfd=socket(AF_INET,SOCK_DGRAM,0);

   servaddr.sin_family = AF_INET;
   servaddr.sin_addr.s_addr=inet_addr(Gserver);
   servaddr.sin_port=htons(PORT);
   char tname[100];

