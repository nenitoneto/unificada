#define BT_CONN 1
#define THRESHOLD 40

sub BTCheck(int conn){
 if (!BluetoothStatus(conn)==NO_ERR){
 TextOut(5,LCD_LINE2,"Error");
 Wait(1000);
 Stop(true);
 }
}

task main () {
int count;
int y;
int values[];

 byte handle, time = 0;
 int n, fsize,len, i;
 int in;
 DeleteFile("int.txt");
 CreateFile("int.txt",4096,handle); 
 SetSensorLight(IN_3);
 SetSensorTouch(IN_1);
do{  
   count=CurrentTick();
  do {
    
			if(b=0)
      {
				liga motor pá para descer {}
				liga motor esteira {}
				liga motor pá para rotacionar {}
        }
						else
            {
							desligo motor rotacionamento da pá{}
							liga motor pá subir {}
							Tempo de espera {} //lixo da esteira subir
							desligo motor da esteira {}
						}
            if (b=0)
            {

  }
  while(SENSOR_3 < THRESHOLD));
  
   values[y]=count;
  y++;
  count=0;

  WriteLn(handle,values);
  
}
while (SENSOR_1 == 0));
