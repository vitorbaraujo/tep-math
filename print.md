# TEP Math

``` c++
// Soma de 1 até n
ll sum(ll i){
  return (i * (i + 1)) / 2;
}

// Soma dos n primeiros quadrados
ll sum(ll i){
  return (i * (i+1) * (2*i + 1)) / 6;
}

// Soma dos n primeiros cubos
ll sum(ll i){
  return ((i * (i+1) * (2*i + 1)) / 6) * ((i * (i+1) * (2*i + 1)) / 6);
}

// Soma dos n primeiros impares
ll sum(ll i){
  return i * i;
}

// Soma dos n primeiros pares
ll sum(ll i){
  return i * (i + 1);
}

// NOTE log(n) se relaciona com o numero de digitos de n base do log

// numero de digitos de n
D = floor(log10(n) + 1)

// extrair digitos de um numero
while(n){ // do-while para n == 0
  int d = n % 10;
  n /= 10;
}

// algoritmo de horner
// transformar de uma base B para base 10
ll to_long_long(const string& s, int base){
  ll res = 0;
  for(auto d : s){
    res *= base;
    res += digits.find(d);
  }
  return res;
}

// quebrar o numero em duas partes
// ex: 625 -> |625, 6|25, 62|5, 625|
ll B = 10;
int n_dig = floor(log10(n) + 1) - 1; // menos um pra tirar o numero completo
cout << n << endl;
while(n_dig--){
  ll a = n / B;
  ll b = n % B;
  cout << a << " " << b << endl;
  B *= 10;
}

// pegar primos naive
for(int i=3;i<=sqrt(n); i += 2)

// exponenciacao rapida
// (a ** n) % m
// python fast exp: pow(a,n,m) -> SEM IMPORTAR MATH -> builtin
ll fast_exp(ll a, ll n, ll m){
  ll res = 1, base = a;

  while(n){
    if(n & 1){ // se impar
      res *= base;
      res %= m;
    }
    base *= base;
    base %= m;
    n /= 2;
  }

  return res;
}

// NOTE python3 integer division: //
// NOTE python3 float division: /
```
