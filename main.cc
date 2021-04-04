//;tail -n +1 $0|c++ -xc++ -&&./a.out|aplay -r48 -c2 -fFLOAT
#include <complex>
#define X x[c]
using namespace std;
int main()
{
  const float P = M_PI, T = 2 * P, q(24e4), g(19e3 / q * T), A = exp(-360 / q), B = exp(-1674 / q), C = A + B, D = A * B, E = 1 + D - C;
  const int m = 256, n = m * 64, d = q / 48e3;
  complex<float> G, I, F, r[n], p, h, H, rt[] = {1, 1j, -1, -1j};
  float f(g), a, l, e, x[2][8] = {}, b[4][n] = {};
  for (int i = 0, e = -m; i <= m; l = e / (m + 2.), b[2][i + 1] = (e == 0 ? 1 : (sin(P * a) / P / a) * (sin(P * l) / P / l)) / 16, i++, e = 2 * i - m)
    a = 15e3 / q * e;
  for (int j, o, c, i, k, s; fread(r, 8, n, stdin); fwrite(b[3], 8, n / d, stdout))
    for (i = 0, s = 0; i<n; G = r[i] * rt[i & 3], b[0][i] = arg(conj(F) * G) * q * 2e-6, p = polar(1.f, -a), h = p * E * b[0][i] + C * H - A * B * I, e = arg(h), f = max(g - 314 / q, min(g + 314 / q, f + .000405789f * e - .000405758f * l)), l = e, a = (a > T ? a - T : a) + f, b[1][i] = 4 * real(p) * imag(p) * b[0][i], i++, I = H, H = h, F = G, o = real(H)> 0.02 ? o + 1 : 0)
      for (c = 0; i % d == 0 && c < 2; X[0] = .997227 * (X[6] + X[2]) - 1.994446 * (X[1] - X[3]) - .994461 * X[4], X[2] = X[1], X[1] = X[6], X[4] = X[3], X[3] = X[0], X[5] = .659241 * (X[5] - X[0]) + X[0], b[3][s++] = (x[0][5] + x[1][5] * (1 - 2 * c)), X[6] = 0, c++)
        for (j = 1, k = n + i - 1; j <= m; j++, k++)
          X[6] += b[c][k % n] * b[2][j];
}
