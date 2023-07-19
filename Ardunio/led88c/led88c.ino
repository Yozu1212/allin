#include <FrequencyTimer2.h> 

#define SP { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}  \
}

#define H { \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}  \
}

#define I  { \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}  \
}

#define heart1 { \
    {0, 1, 1, 0, 0, 1, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 0, 1, 1, 1, 1, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}  \
}
#define heart2 { \
    {0, 0, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 1, 0, 0, 1, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 0, 1, 1, 1, 1, 0, 0}, \
    {0, 0, 0, 1, 1, 0, 0, 0}, \
    {0, 0, 0, 0, 0, 0, 0, 0}  \
}

#define heart3 { \
     {0, 0, 0, 0, 0, 0, 0, 0}, \
     {0, 0, 0, 0, 0, 0, 0, 0}, \
     {0, 1, 1, 0, 0, 1, 1, 0}, \
     {1, 1, 1, 1, 1, 1, 1, 1}, \
     {1, 1, 1, 1, 1, 1, 1, 1}, \ 
     {0, 1, 1, 1, 1, 1, 1, 0}, \
     {0, 0, 1, 1, 1, 1, 0, 0}, \
     {0, 0, 0, 1, 1, 0, 0, 0}  \
}

#define Arrow { \
     {0, 0, 0, 0, 1, 0, 0, 0}, \
     {0, 0, 0, 1, 1, 1, 0, 0}, \
     {0, 0, 1, 1, 1, 1, 1, 0}, \
     {0, 1, 1, 1, 1, 1, 1, 1}, \
     {0, 0, 0, 1, 1, 1, 0, 0}, \ 
     {0, 0, 0, 1, 1, 1, 0, 0}, \
     {0, 0, 0, 1, 1, 1, 0, 0}, \
     {0, 0, 0, 1, 1, 1, 0, 0}  \
}
#define A { \
    {0, 0, 0, 1, 0, 0, 0, 0}, \
    {0, 0, 1, 0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {1, 1, 1, 0, 1, 1, 1, 0}  \
}
#define P { \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {1, 1, 1, 0, 0, 0, 0, 0}  \
}

#define E { \
    {0, 1, 1, 1, 1, 1, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 0}  \
}
#define L { \
    {1, 1, 1, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 1, 1, 1, 0}  \
}
#define Y { \
    {1, 1, 1, 0, 1, 1, 1, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {0, 0, 1, 0, 1, 0, 0, 0}, \
    {0, 0, 0, 1, 0, 0, 0, 0}, \
    {0, 0, 0, 1, 0, 0, 0, 0}, \
    {0, 0, 0, 1, 0, 0, 0, 0}, \
    {0, 0, 0, 1, 0, 0, 0, 0}, \
    {0, 0, 1, 1, 1, 0, 0, 0}  \
}

#define N { \
    {0, 1, 0, 0, 0, 1, 1, 1}, \
    {0, 1, 1, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 1, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 1, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 1, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {1, 1, 1, 0, 0, 1, 1, 1}  \
}

#define W { \
    {1, 1, 1, 0, 0, 0, 1, 1}, \
    {0, 1, 0, 0, 0, 0, 0, 1}, \
    {0, 1, 0, 0, 0, 0, 0, 1}, \
    {0, 1, 0, 0, 1, 0, 0, 1}, \
    {0, 1, 0, 0, 1, 0, 0, 1}, \
    {0, 1, 0, 0, 1, 0, 0, 1}, \
    {0, 1, 0, 1, 0, 1, 0, 1}, \
    {0, 0, 1, 0, 0, 0, 1, 0}  \
}

#define R { \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 1, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 1, 0, 0}, \
    {0, 1, 0, 0, 0, 0, 1, 0}, \
    {1, 1, 1, 0, 0, 1, 1, 1}  \
}





#define Z { \
    {0, 0, 1, 0, 0, 0, 1, 0}, \
    {0, 0, 1, 0, 0, 0, 1, 0}, \
    {1, 1, 1, 1, 1, 1, 1, 1}, \
    {0, 0, 1, 0, 0, 0, 1, 0}, \
    {0, 1, 1, 0, 1, 1, 1, 1}, \
    {1, 0, 1, 1, 0, 0, 1, 0}, \
    {0, 0, 1, 0, 1, 0, 1, 0}, \
    {0, 0, 1, 0, 1, 1, 1, 1}  \
}
#define S { \
{0,1,0,0,0,1,0,0},\
{0,1,0,0,0,1,0,0},\
{0,1,0,0,0,1,0,0},\
{0,1,0,0,0,1,0,0},\
{0,0,0,0,0,0,0,1},\
{1,0,0,0,0,0,1,0},\
{0,1,0,0,0,1,0,1},\
{0,0,1,1,1,0,1,1}\
}
byte col = 0;
byte leds[8][8];

// pin[xx] on led matrix connected to nn on Arduino (-1 is dummy to make array start at pos 1)
int pins[17]= {-1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 14, 15, 16, 17, 18, 19};

// col[xx] of leds = pin yy on led matrix
int cols[8] = {pins[1], pins[2], pins[3], pins[4], pins[5], pins[6], pins[7], pins[8]};

// row[xx] of leds = pin yy on led matrix
int rows[8] = {pins[9], pins[10], pins[11], pins[12], pins[13], pins[14], pins[15], pins[16]};

const int numPatterns = 8;
byte patterns[numPatterns][8][8] = {
  //H,A,P,P,L,Y
   //N,E,W,
    Y,E,A,R,Z,S
};

 



int pattern = 0;

void setup() {
  // sets the pins as output
  for (int i = 1; i <= 16; i++) {
    pinMode(pins[i], OUTPUT);
  }

  // set up cols and rows
  for (int i = 1; i <= 8; i++) {
    digitalWrite(cols[i - 1], LOW);
  }

  for (int i = 1; i <= 8; i++) {
    digitalWrite(rows[i - 1], LOW);
  }

  clearLeds();

  // Turn off toggling of pin 11
  FrequencyTimer2::disable();
  // Set refresh rate (interrupt timeout period)
  FrequencyTimer2::setPeriod(2000);
  // Set interrupt routine to be called
  FrequencyTimer2::setOnOverflow(display);

}

void loop() {
  for (int i = 0; i < numPatterns; i++) {
    setPattern(i);
    delay(500);
  }
}

void clearLeds() {
  // Clear display array
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      leds[i][j] = 1;
    }
  }
}

void setPattern(int pattern) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      leds[i][j] = patterns[pattern][i][j];
    }
  }
}

// Interrupt routine
void display() {
  digitalWrite(cols[col], LOW);  
  col++;
  if (col == 8) {
    col = 0;
  }
  for (int row = 0; row < 8; row++) {
    if (leds[col][7 - row] == 1) {
      digitalWrite(rows[row], LOW);  
    }
    else {
      digitalWrite(rows[row], HIGH); 
    }
  }
  digitalWrite(cols[col], HIGH); 
}
