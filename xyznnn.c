#define n 1 
typedef struct {
    int N[5][5];
} Matrix;
Matrix leftK = {
    .N = {
        {n, 0, 0, n, 0},
        {n, 0, n, 0, 0},
        {n, n, 0, 0, 0},
        {n, 0, n, 0, 0},
        {n, 0, 0, n, 0}
    }
};
Matrix rightK = {
    .N = {
        {0, n, 0, 0, n},
        {0, n, 0, n, 0},
        {0, n, n, 0, 0},
        {0, n, 0, n, 0},
        {0, n, 0, 0, n}
    }
};
Matrix midK = {
    .N = {
        {n, 0, 0, 0, n},
        {n, 0, 0, n, 0},
        {n, n, n, 0, 0},
        {n, 0, 0, n, 0},
        {n, 0, 0, 0, n}
    }
};
Matrix sum = {
    .N = {
        {n, n, n, n, n},
        {0, n, 0, 0, 0},
        {0, 0, n, 0, 0},
        {0, n, 0, 0, 0},
        {n, n, n, n, n}
    }
};
Matrix multiply = {
    .N = {
        {n, n, n, n, n},
        {0, n, 0, n, 0},
        {0, n, 0, n, 0},
        {0, n, 0, n, 0},
        {0, n, 0, n, 0}
    }
};
int fn(a,b,c,d,e,f){
    float a = 1/7,b = 2/7,c = 3/7, d = 4/7,e = 5/7,f = 6/7;
    const n5 = a * (n ^ 5) + b * (n ^ 4) + c * (n ^ 3) + d * (n ^ 2) + e * n + a;
    const n4 = a * (n ^ 4) + b * (n ^ 3) + c * (n ^ 2) + d * n + e * (n ^ -1) + b;
    const n3 = a * (n ^ 3) + b * (n ^ 2) + c * n  + d * (n ^ -1) + e * (n ^ -2) + c;
    const n2 = a * (n ^ 2) + b * n  + c * (n ^ -1) + d * (n ^ -2) + e * (n ^ -3) + d;
    const n1 = a * n  + b * (n ^ -1) + c * (n ^ -2) + d * (n ^ -3) + e * (n ^ -4) + e;
    const n0 = a * (n ^ -1)+ b * (n ^ -2) + c * (n ^ -3) + d * (n ^ -4) + e * (n ^ -5) + f;
}
void xyznnn(x,y,z){
    char n5 = "'x+n,y+n,z+n', 'x+n,z+n,y+n', 'y+n,z+n,x+n', 'z+n,y+n,x+n'";
    char n4 = "'x+n,z+n,y-n', 'x+n,y+n,z-n', 'z+n,y+n,x-n', 'y+n,z+n,x-n'";
    char n3 = "'y+n,x-n,z+n', 'y+n,z-n,x+n', 'x+n,z-n,y+n', 'z+n,x-n,y+n'";
    char n2 = "'y-n,z+n,x-n', 'y-n,x+n,z-n', 'z-n,x+n,y-n', 'x-n,z+n,y-n'";
    char n1 = "'z-n,x-n,y+n', 'z-n,y-n,x+n', 'x-n,y-n,z+n', 'y-n,x-n,z+n'";
    char n0 = "'z-n,y-n,x-n', 'z-n,x-n,y-n', 'y-n,x-n,z-n', 'x-n,y-n,z-n'";
}
int gn(A,B,C,D,E,F,X,Y,Z,N){
    char A = "00001011",B = "00001010",C = "00001101",D = "00001110",E = "00001111",F = "00010000";
    return         
        A * sin(X + N) + B * cos(X - N) + C * sin(Y + N) + D * cos(Y - N) + E * sin(Z + N) + F * cos(Z - N);          
        A * asin(X + N) + B * acos(X - N) + C * asin(Y + N) + D * acos(Y - N) + E * asin(Z + N) + F * acos(Z - N); 
        A * sinh(X + N) + B * cosh(X - N) + C * sinh(Y + N) + D * cosh(Y - N) + E * sinh(Z + N) + F * cosh(Z - N);        
        A * asinh(X + N) + B * acosh(X - N) + C * asinh(Y + N) + D * acosh(Y - N) + E * asinh(Z + N) + F * acosh(Z - N);  
        A * tan(X + N) + B * atan(X - N) + C * tan(Y + N) + D * atan(Y - N) + E * tan(Z + N) + F * atan(Z - N);
        A * exp(X + N) + B * log(X - N) + C * exp(Y + N) + D * log(Y - N) + E * exp(Z + N) + F * log(Z - N);
}