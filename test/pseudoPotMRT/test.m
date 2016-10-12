clear all;

f_eq_1 = [ 55.55555555555555 13.888888888888888 13.888888888888888 13.888888888888888 13.888888888888888 3.472222222222222 3.472222222222222 3.472222222222222 3.472222222222222 ];

f_eq_2 = [5.555555555555555 1.3888888888888888 1.3888888888888888 1.3888888888888888 1.3888888888888888 0.3472222222222222  0.3472222222222222 0.3472222222222222 0.3472222222222222];

M = [1  1  1  1  1  1  1  1  1,
    -4 -1 -1 -1 -1  2  2  2  2,
     4 -2 -2 -2 -2  1  1  1  1,
     0  1  0 -1  0  1 -1 -1  1,
     0 -2  0  2  0  1 -1 -1  1,
     0  0  1  0 -1  1  1 -1 -1,
     0  0 -2  0  2  1  1 -1 -1,
     0  1 -1  1 -1  0  0  0  0,
     0  0  0  0  0  1 -1  1 -1];

s = [ 1.0 1.1 1.1 1.0 1.1 1.0 1.1 0.6 0.6 ];

Lambda = diag(s);

LambdaBar = inv(M) * Lambda * M;

Sbar_0 = [0 10210.86055284303 -10210.86055284303 7048.612100908765 -7048.612100908765 0 0 0 0];

Sbar_36 = [0 10210.86055284303 -10210.86055284303 719.5663036920095 -719.5663036920095 0 0 0 0];

S_0 = inv(M) * Sbar_0';
S_36 = inv(M) * Sbar_36';

