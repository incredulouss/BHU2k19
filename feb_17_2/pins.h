
#define rightMoto1 22
#define rightMoto2 24
#define rightMotoPW 4
#define leftMoto1 30
#define leftMoto2 28
#define leftMotoPW 3
#define motorPowe 26

#define BUTTON_1 (A11)
#define BUTTON_2 (A12)
#define LED3 42
#define LED2 44
#define LED 53
#define NUM_SENSORS  8
#define EMITTER_PIN 52
#define LINE_THRESHOLD 500

#define BaseSpeed 150     //150
#define rightMaxSpeed (BaseSpeed + 20)
#define leftMaxSpeed (BaseSpeed + 20) 
int trueNode = 0;
int falseNode = 0 ;

#define stopDelay 7000
#define turnSpeed 50
#define alignTime 220
#define inchDelay 53    //50      40at170

typedef enum
{
  MAZE=0,
  RIGHT_WALL_FOLLOW,
  LEFT_WALL_FOLLOW,
  BLOCK_DETECTION,
  BLINK
} State;

State state = MAZE;
//Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

int calMax[]={0,0,0,0,0,0,0,0,0};
int calMin[]={1023,1023,1023,1023,1023,1023,1023,1023,1023};
int sensors[]={A7,A6,A5,A4,A3,A2,A1,A0};

int colourMax[]={0,0};//R,B
int colourMin[]={1023,1023};//R,B

int lastError = 0,val;float integralError=0;
int s[NUM_SENSORS];
int lastValue=0;
int VFlag=0;
int position=0;
int leftd,midd,rightd;
int previousLeftd=450,previousRightd=450;
int blocks=0;
char blockColour[5];
int wallSwitch=1;
int onWhite=0;
