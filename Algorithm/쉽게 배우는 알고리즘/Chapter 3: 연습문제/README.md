<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

어떠한 n이라도 n과 5n 사이에 5의 멱수가 하나 있음. 즉,  n <= 5^k <= 5n인 5^k가 하나 존재함.<br>
T(n) = O(n^r)인 경우 T(5n) = O((5^r) * (n^r)) = O(n^r) = T(n)임.<br>
T(n) <= T(5^k) <= T(5n)인데 T(n) = T(5n)이므로 T(n) = T(5^k) = T(5n)임.<br>
따라서 n = 5^k이라고 해도 점근적 분석의 결과는 같음.<br>

**:pushpin: 2번**

<pre>
isThereX(A[], start, end, x)
{
  if x < A[start] 혹은 x > A[end]
    return false
  elif x == A[start] 혹은 x == A[end]
    return true
  else
    point = start와 end 가운데, 만약 start와 end가 붙어있으면 start로
    if x == A[point]
      return true
    elif x < A[point]
      return isThereX(A[], start, point, x)
    else
      return isThereX(A[], point, end, x)
}
</pre>

<pre>
T(n) <= T(n/2) + a의 점근적 복잡도는 O(logn)이다. 즉 충분히 큰 n에 대해서 T(n) <= clogn인 양의 상수 c가 존재한다.
     <= clog(n/2) + a
     = clogn - clog2 + a
     = clogn - (clog2 - a)
     <= clogn
     
clog2 -a >= 0 즉 a <= clog2이기만 하면 이를 만족하는 상수 c가 존재함.
따라서 T(n) = O(nlogn)임.
</pre>

**:pushpin: 3번**

1.<br>

<pre>
마스터 정리

f(n)/h(n) = 1/n^(1/2)이므로 limf(n)/h(n) = 0이고 f(n)/h(n) = O(1/n^ε)임.
1/n^(1/2) <= c / n^ε이 c = 1, ε = 1/4일 때 성립함.
따라서 T(n) = Θ(h(n)) = Θ(n)임.

점근적 상한

T(n) = 3T(n/3) + n^(1/2)의 점근적 복잡도가 T(n) = O(n)이라는 것을 증명하겠음. 즉, T(n) <= cn - 3n^(1/2)인 양의 상수 c가 존재한다는 것을 증명하겠음.
T(n) = 3T(n/3) + n^(1/2)
     <= cn - 3*3^(1/2)*n^(1/2) + n^(1/2)
     <= cn - 3 * n^(1/2)이 성립함.

점근적 하한

T(n) = 3T(n/3) + n^(1/2)의 점근적 복잡도가 T(n) = Ω(n)이라는 것을 증명하겠음. 즉, T(n) >= cn인 양의 상수 c가 존재한다는 것을 증명하겠음.
T(n) = 3T(n/3) + n^(1/2)
     >= cn + n^(1/2)
     >= cn이 성립함.
</pre>

2.<br>

<pre>
마스터 정리

a=1, b=2, f(n)=n^(1/2), h(n)=1
limf(n)/h(n) = n^(1/2)임.
c * n ^ε < = f(n)/h(n) = n^(1/2)을 만족하는 c = 1, ε = 1/4이 있으므로 f(n)/h(n) = Ω(n^ε)임.
f(n/2) <= cf(n)을 만족하는 c = 2/3이 있으므로, T(n) = Θ(n)임.

점근적 상한

T(n) = T(n/2) + n의 점근적 복잡도가 T(n) = O(n)이라는 것을 증명하겠음. 즉, T(n) <= cn인 양의 상수 c가 존재한다는 것을 증명하겠음.
T(n) = T(n/2) + n
     <= cn/2 + n
     <= cn이 c >= 2에서 성립함.
     
점근적 하한

T(n) = T(n/2) + n의 점근적 복잡도가 T(n) = Ω(n)이라는 것을 증명하겠음. 즉, T(n) >= cn인 양의 상수 c가 존재한다는 것을 증명하겠음.
T(n) = T(n/2) + n
     >= cn/2 + n
     >= cn이 c = 1에서 성립함.
</pre>

3.
<pre>
T(n) = 2T(n-1) + 2
     = 2^2 * T(n-2) + 2^2 + 2
     = ...
     = 2^k * T(n-k) + (2^k + ... + 2)
     = ...
     = 2^n * T(0) + (2^n + ... + 2)
     = 2^n + 2^(n+1) - 2 (T(0) = 1 가정)
     = 3 * 2^n - 2
     
3 * 2^n - 2 <= c * 2^n는 c = 4일 때 성립하므로 O(2^n).
3 * 2^n - 2 >= c * 2^n는 c = 1일 때 성립하므로 Ω(2^n).
따라서 θ(2^n)임.
</pre>

4.
<pre>
T(n) = 3T(n/3 + 15) + Θ(n)의 점근적 복잡도가 O(nlogn)으로 가정하겠음.
즉, 충분히 큰 n에 대하여 T(n) <= cnlogn인 양의 상수 c가 존재한다.

T(n) = 3T(n/3 + 15) + Θ(n)
     <= 3c * (n/3 + 15) * log(n/3 + 15) + Θ(n)
     = cnlog(n/3 + 15) + 45clog(n/3+15) + Θ(n)
     <= cnlogn

n이 15이상이면 cnlog(n/3 + 15) <= cnlogn이고, 45clog(n/3+15)와 Θ(n)은 n이 충분히 클 경우 cnlogn이 압도하므로 이를 만족하는 양의 상수 c가 존재한다.
따라서 T(n) = O(nlogn)임.
</pre>

5.
<pre>
마스터 정리를 적용하자.
a = 2, b = 2, f(n) = Θ(nlog2n), h(n) = 1

lim f(n) / h(n) =  ∞이고 2f(n/2) = Θ(nlog2(n/2)) <= Θ(nlog2n)이므로 T(n) = Θ(f(n))임.
따라서 T(n) = Θ(nlogn)임.

점근적 상한

T(n) = 2T(n/2) + Θ(nlog2n)
     = 2^2 * T(n/2^2) + Θ(nlog2(n/2)) + Θ(nlog2n)
     = ...
     = 2^k * T(n/2^k) + Θ(nlog2(n/2^(k-1))) + ... + Θ(nlog2n)
     = 2^k * T(1) + kΘ(nlog2n) - nk(k-1)/2
     
따라서 점근적 상한은 O(2^k)임.

점근적 하한

T(n) = Ω(nlogn)임을 가정함.
T(n) >= cnlogn임을 가정함.

T(n) = 2T(n/2) + Θ(nlog2n)
     >= cnlog(n/2) + Θ(nlog2n)
     >= cnlogn
     
위 조건을 만족하는 상수 c를 잡을 수 있음.

따라서 점근적 하한은 Ω(nlogn)임.
</pre>

6.
<pre>
마스터 정리를 적용하자.
a = 10, b = 15, f(n) = b, h(n) = n^log10(15)

lim f(n) / h(n) = 0이므로 T(n) = Θ(h(n))임.

T(n) = O(n^log10(15))라고 가정하면 T(n) <= cn^log10(15)임.

T(n) = 10c * (n/15)^log10(15) + 10b + b
     <= c * n^log10(15)
위 조건을 만족하는 c가 존재하므로 상한은 O(n^log10(15))임.
</pre>

7.
<pre>
T(n) = O(nlogn)임을 가정함.
즉, T(n) <= cnlogn임을 가정함.

T(n) = 5T(n/6 + 100) + n
     <= 5cn/6 * log(n/6 + 100) + 500c * log(n/6 + 100) + n
     <= cnlogn
     
n >= 6000일 때(n이 충분히 큰 상수일 때) 위 조건을 만족하는 상수 c를 구할 수 있다.

따라서 상한은 T(n) = O(nlogn)임.
</pre>

**:pushpin: 4번**

<pre>
T(n) = T(n-2) + O(1)
     = T(n-4) + 2O(1)
     = T(n-2k) + kO(1)
     = ...
     = T(0) + (n/2) * O(1)
     = O(n)
     
따라서 T(n)의 점근적 수행 시간은 O(n)이다.
</pre>

**:pushpin: 5번**

<pre>
T(n) = 2T(n-1) + 1
     = 2^2 * T(n-2) + 2^2 - 1
     = ...
     = 2^k * T(n-k) + 2^k - 1
     = ...
     = 2^(n-1) * T(1) + 2^(n-1) -1
     = 2^n - 1
     
T(0) = T(1) = 1
</pre>

<pre>
O(2^n)임을 증명

2^n - 1 <= c2^n을 만족하는 양의 상수 c와 n0이 있음.
c = 1, n0= 1일 때 성립.

Ω(2^n)임을 증명

c2^n <= 2^n - 1임을 만족하는 양의 상수 c와 n0이 있음.
c = 1/2, n0 = 1일때 성립

따라서 Θ(2^n)임.
</pre>

<pre>
T(n) = 2T(n-1) + 1의 점근적 복잡도는 Ω(2^n)임을 가정하자.

T(n) >= c * 2^n인 양의 상수 c가 존재한다는 것을 증명

T(n) >= 2T(n-1) + 1
     >= 2 * c * 2^(n-1) + 1 = c * 2^n + 1
     >= c * 2^n
</pre>

**:pushpin: 6번**

<pre>
T(n) = T(n-1) + O(n)
T(1) = 1

T(n) = T(n-1) + O(n) 
     = T(n-2) + O(n-1) + O(n) 
     = T(n-3) + O(n-2) + O(n-1) + O(n) 
     = ... 
     = T(1) + O(2) + O(3) + ... + O(n-1) + O(n)
     = O(n^2)
</pre>

**:pushpin: 7번**

<pre>
T(1) = 1
T(n) = T(n/3) + O(n)

a = 1, b = 3, f(n) = O(n), h(n) = 1로 마스터 정리를 적용할 수 있음.

lim f(n) / h(n) = lim O(n) = 무한이므로 마스터 정리 2번에 해당함.

f(n) / h(n) = O(n)이고 어떤 양의 상수 ε에 대하여 c * n^ε <= O(n)이 성립함.(c = 1, ε = 0.1)
af(n/b) = f(n/3) <= cf(b)이 성립함.(a = 1, b = 3, c = 1/2)
따라서 Θ(f(n)) = Θ(n)임.
</pre>

**:pushpin: 8번**

<pre>
T(n) = 2T(n/2) + O(n)

a = 2, b = 2, f(n) = O(n), h(n) = n

f(n) / h(n) = Θ(1)임.

T(n) = Θ(h(n)logn) = Θ(nlogn)
</pre>

**:pushpin: 9번**

<pre>
T(n) = 2T(n/2) + O(1)

a = 2, b = 2, f(n) = O(1), h(n) = n

lim f(n) / h(n) = lim 1/n = 0이므로 마스터 정리 1번임.

f(n) / h(n) = O(1)/n <= c * (1 / n^ε)에서 ε = 0.5, c = 1일때 성립하므로 T(n) = Θ(n)
</pre>

**:pushpin: 10번**

<pre>
T(n) = T(n/2) + (1/2) * T(n/2) + O(1)
     = (3/2)T(n/2) + O(1)
     
a = 3/2, b = 2, f(n) = O(1), h(n) = n^log2(3/2) = n^0.45

lim f(n) / h(n) = 0이므로 T(n) = Θ(h(n)) = Θ(n^log2(3/2))
</pre>

**:pushpin: 11번**

<pre>
T(n) = 3T(n/3) + O(1)

a = 3, b = 3, f(n) = O(1), h(n) = n

lim f(n) / h(n) = lim O(1)/n = 0이므로 마스터 정리 1번임.

f(n) / h(n) = O(1)/n <= c * (1 / n^ε)에서 ε = 0.5, c = 1일때 성립하므로 T(n) = Θ(n)
</pre>

**:pushpin: 12번**

<pre>
T(n) = 2T(n/3) + O(n)

a = 2, b = 3, f(n) = O(n), h(n) = n^(log3(2))

lim f(n) / h(n) = 무한이므로 마스터 정리 2번임.

f(n) / h(n) = n^(1 - log3(2)) = n ^ log3(1.5) >= c * n^ε임.(ε = log3(1.2), c = 1일 떄 성립함)
af(n/b) = 2f(n/3) = 2O(n/3) = (2/3) * O(n) <= c * f(n) = c * O(n)이 성립함.(c = 4/5일 때 성립함)

따라서 T(n) = Θ(n)임.
</pre>

**:pushpin: 13번**

<pre>
T(n) = T(n/2 + 3) + O(1)
     = T(n/2^2 + 3/2 + 3) + 2*O(1)
     = ...
     = T(n/2^k + 3/2^(k-1) + ... + 3) + k * O(1)
     = ...
     = T(5) + k * O(1)임.
(아직까지는 n=4이하에서 시작하지 않는 한 n/2 + 3이 5이하로 떨어지기가 힘들어서 무한 재귀가 될 거라고 생각함)
원래는 
= T(n/2^k + 3/2^(k-1) + ... + 3) + k * O(1)
= T(6 + (n-6) / 2^k ) + kO(1)로 가정했음.

k = 2^n일 때 T(7 - 6/n) + log2(k) * O(1)임.
7-6/n이 5이하로 내려오려면 n<=3이어야 한다는 제약조건이 따르지만 충족한다고 가정하자.
T(7-6/n)을 특정 상수 a라고 가정하면 a + log2(k) * O(1)임.
a + log2(k) * O(1) <= c * log2(k)을 만족하는 c를 찾을 수 있음.
c = O(1) + a / log2(k)임.

따라서 점근적 상한은 O(logn)임.

k = 2^n이라고 가정했을 때, T(5) = K

T(5) + k * O(1) <= c
</pre>

**:pushpin: 14번**

<pre>
n = 3^k일 때 algA(n) = 2n임.

algA(n) = 3 * algA(n/3) = 3 * algA(3^(k-1))
        = 3^2 * algA(3^(k-2))
        = ...
        = 3^k * algA(3^0)
        = 3^k * algA(1)
        = 3^k * 2
        = 2n
</pre>

<pre>
이 알고리즘을 점화식으로 표현하면 T(n) = 3T(n/3) + O(n)과 같음.

a = 3, b = 3, f(n) = O(n), h(n) = n으로 마스터 정리를 적용할 수 있음.

f(n) / h(n) = 1이므로, Θ(nlogn)임.
</pre>

**:pushpin: 15번**

<pre>
T(n) = 2T(n/3) + T(2n/3) + O(1)

T(n) = O(n^2)로 가정함.
즉, T(n) <= cn^2로 가정함.

T(n) = 2T(n/3) + T(2n/3) + O(1)
     <= 2cn^2/3 + O(1)
     <= cn^2

따라서 T(n) = O(n^2)임.
</pre>

**:pushpin: 16번**

<pre>
T(n) = T(2n/7) + T(5n/7) + n

T(n) = O(nlogn)으로 가정하자.
즉, T(n) <= cnlogn으로 가정하자.

T(n) = T(2n/7) + T(5n/7) + n
     <= 2cn/7 * log(2n/7) + 5cn/7 * log(5n/7) + n
     = cnlogn + cn((2/7)log2 + (5/7)log5 - log7) + n
     ≈ cnlogn -0.26cn + n
     <= cnlogn
     
n <= 0.26cn을 만족하는 c를 잡을 수 있음.

따라서 T(n) = O(nlogn)임.

return 값도 cnlogn임. 이 때 c는 1이상의 상수임.
</pre>

**:pushpin: 17번**

**:pushpin: 18번**

**:pushpin: 19번**

**:pushpin: 20번**

**:pushpin: 21번**

**:pushpin: 22번**

**:pushpin: 23번**

