#include <stdio.h>

void rgb (int r, int g, int b, char hex[6 + 1])
{
  int array[3] = { r, g, b};
  for(int i = 0; i < 3; i++){
    if(array[i] < 0){
        array[i] = 0;
    }else if (array[i] > 255){
        array[i] = 255;
    }
  }
    snprintf(hex, 7, "%02X%02X%02X", array[0], array[1], array[2]);
    printf("Buffer size: %lu\n", sizeof(hex));
}

int main(){
    return 0;
}
/*
%X: Formats an integer as an uppercase hexadecimal value (e.g., 255 becomes FF).
02: Ensures the value is at least 2 digits wide and pads with zeros if necessary (e.g., 15 becomes 0F).
*/
/*
Why Use snprintf Over sprintf?
snprintf adds a layer of safety by allowing you to specify the buffer size.
It prevents buffer overflows by truncating the output if it exceeds the specified size
*/