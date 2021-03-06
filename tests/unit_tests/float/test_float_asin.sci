//SCI2C: DEFAULT_PRECISION= FLOAT
function test_float_asin()
  d0 = %pi
  d2 = [1 2 3 4 ; 4 5 1  8 ; 9 1 11 12 ; 13 14 15 16]
  z0 = d0 + %i * d0
  z2 = d2 + %i * d2
  
  disp(asin(d0));
  disp(asin(d2));
  disp(asin(z0));
  disp(asin(z2));
endfunction
