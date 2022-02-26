struct num {
    float a;
    float b; 
};

program MATH_PROGRAM {
  version ADD_VERSION {
    float add(num) = 1;
  } = 1;
  version SUB_VERSION {
    float sub(num) = 2;
  } = 2;
  version DIV_VERSION {
    float div(num) = 3;
  } = 3;
  version MULT_VERSION {
    float mult(num) = 4;
  } = 4;
} = 9999999;

                
