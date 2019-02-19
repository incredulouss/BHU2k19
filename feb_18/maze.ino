#define LEFT_HAND_MAZE 1
int counterr = 0 ;
int secondCount = 0;
int falseCounterr = 0 ;

void maze()
{
 
  pid();
  unsigned char foundLeft=0;
  unsigned char foundRight=0;
  unsigned char foundStraight=0;
  unsigned char foundNode = 0;
  Motors.forward(70);        //70
  delay(15);           //15
  getVal();//2ms delay

  if(s[0] && s[7]  && (s[3] == 0) && (s[4] ==0))
   {
    counterr++;
     int  a  =  getMidDistance();
    if(a < 800 )
    {
     secondCount++;
     counterr--;
     digitalWrite(LED2 , 1);
     delay(20);
     digitalWrite(LED2 , 0 );
      
    }
    delay(40);
    digitalWrite(LED , 1);
    delay(20);
    digitalWrite(LED , 0 );
    return;
 
   }
  if(s[0])
    foundLeft=1;
  if(s[7])
    foundRight=1;
  Motors.forward(40);    //40
  delay(inchDelay);       //40
  getVal();

   
  if(s[0] && s[7] && s[4] && s[3] &&s[2])
    {

     Motors.stp(); 
     ledd(1,2000);
     ledd( counterr, 1000);    
      ledd2(  secondCount, 1000);  
     delay(7000);  
   
      return;
    }
  if(!VFlag)
    if(s[2] || s[3] || s[4] || s[5])
      foundStraight=1;

  char dir= findTurn(foundLeft,foundRight,foundStraight);
  
  turn(dir);
   //   digitalWrite(LED , 0);
}

char findTurn(unsigned char left,unsigned char right,unsigned char straight)
{
  if(LEFT_HAND_MAZE)
  {
    if(straight)
      return 'S';
    else if(left)
      return 'L';
    else if(right)
      return 'R';
    else
      return 'B';
  }
  else
  {
    if(right)
      return 'R';
    else if(straight)
      return 'S';
    else if(left)
      return 'L';
    else
      return 'B';
  }
}




