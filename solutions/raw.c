// The following is a piece of C code, whose intention was to print a minus sign 20 times. But you can notice that, it doesn't work.

  #include <stdio.h>
  int main()
  {
      int i;
      int n = 20;
      for( i = 0; i < n; i-- )
          printf("-");
      return 0;
  }

// Well fixing the above code is straight-forward. To make the problem interesting, you have to fix the above code, by changing exactly one character. There are three known solutions. See if you can get all those three. 

// SPOILER - SOLUTION BELOW





















































// change i-- to n--
// change i < n to -i < n
// change i < n to i + n
