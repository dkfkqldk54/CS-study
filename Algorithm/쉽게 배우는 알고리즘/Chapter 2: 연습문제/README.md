<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

1. x. 점근적 수행 시간은 세타(nlogn)임. 점근적 수행 시간은 n이 커질 때 알고리즘이 걸리는 시간의 추세를 나타내는 말임. 이 경우 단 2개의 입력에 대해서만 n^2에 비례하는 시간이 소요되고, 나머지에 대해서는 nlogn에 비례하는 시간이 소요됨. 특정한 상황은 일부분에 불과하기 때문에 이를 무시하기 입력에 대한 추세를 따져야 함.
2. O. 단 두 개의 입력에 대해서만 n^2에 비례하는 시간이 들지만, 점근적 시간의 상한은 O(n^2)이라고 볼 수 있음.
3. O. 최악의 경우 n^2에 비례하는 시간이 걸릴 수 있지만, 그보다 적은 시간이 걸릴 수도 있으므로 O(n^2)이라는 말은 맞음.
4. 최악의 경우 세타(n^2)이라는 말은, 최악의 경우에는 n^2에 비례하는 시간이 걸리지만 그 이외의 경우에는 더 적은 시간이 걸릴 수 있다는 의미임. 반면 알고리즘 수행 시간이 O(n^2)이라는 말은 n^2에 비례하는 시간이 걸릴 수도 있지만 그보다 더 적은 시간만 걸릴 수도 있다는 의미이므로 같은 뜻이 아님.

**:pushpin: 2번**

1. O, 입력 중 100개에 대해서 알고리즘은 n^2에 비례하는 시간이 든다고 했으므로, 최악의 경우에도 이 시간 복잡도를 넘지 않을 것이므로 O(n^2)임.<br>
2. O, 입력 중 100개에 대해서 알고리즘이 n^2에 비례하는 시간이 드는데 이 경우가 최악의 경우임. 그런데 이 경우에도 n^2을 넘지 않으므로 최악의 경우 O(n^2)이 맞음.<br>
3. O, 입력 중 100개에 대해서는 알고리즘이 n^2에 비례하는 시간이 걸리므로 최악의 경우는 시간 복잡도가 세타(n^2)이다.<br>
4. O, 전체 입력 케이스가 n!개인데, 입력 중 nlogn이 아닌 200개의 케이스는 굉장히 적은 비중을 차지한다. 따라서 평균적으로는 이외의 모든 입력에 대해 nlogn에 비례하는 시간 복잡도를 가지기 때문에 세타(nlogn)이 맞음.<br>
5. O, 평균적인 입력 케이스의 경우 시간복잡도는 nlogn에 비례함. lim nlogn / n = lim logn = infinite이므로 맞음.
6. X, 최선의 입력 케이스의 경우 시간복잡도는 n에 비례함. lim n / n = 0이 되어야 하는데 1이므로 o(n)이 아님.

**:pushpin: 3번**

피보나치 수열, 병합 정렬 등..

**:pushpin: 4번**

1. 빅오<br>
2. 빅오메가<br>

**:pushpin: 5번**

1. 빅오, 리틀오<br>
2. 빅오메가, 리틀오메가<br>

**:pushpin: 6번**

a. 8n, 8n-3<br>
b. 전부<br>
c. 8n, 8n-3<br>
d. 8n, 8n-3, n^2 + 3nlogn, 4nlogn, 5n^2 + 3<br>
e. n^2 + 3nlogn, 5n^2 + 3, n^3 + 3nlogn, n^2logn + n<br>
f. n^2 + 3nlogn, 5n^2 + 3<br>

**:pushpin: 7번**

1. 분할(divide): 주어진 배열을 절반으로 나누어 두 개의 서브 배열로 분할함. 이 때, 분할은 배열의 중간 지점을 기준으로 이루어짐.<br>
2. 정복(conquer): 분활된 두 개의 서브 배열을 재귀적으로 정렬함. 이 때, 재귀적으로 정렬하는 방법은 이전과 동일하게 병합정렬을 사용함.<br>
3. 병합(merge): 정렬된 두 개의 서브 배열을 하나의 배열로 병합함. 이 때, 병합 과정에서는 두 개의 서브 배열을 처음부터 끝까지 비교하여 더 작은 값을 새로운 배열에 추가함.<br>

**:pushpin: 8번**

1. 빅오(n^2)임을 증명한다: 2n^2 - 10n + 3 <= cn^2을 만족하는 c와 n0을 찾는다. c는 3, n0 = 1로 잡을 때 조건을 충족한다.<br>
2. 빅오메가(n^2)임을 증명한다.: cn^2 <= 2n^2 - 10n + 3을 만족하는 c와 n0을 찾는다. c는 1, n0는 10으로 할 경우 조건을 충족한다.<br>
3. 빅오(n^2)와 빅오메가(n^2)을 모두 충족하므로 세타(n^2)도 충족한다.<br>

**:pushpin: 9번**

첫 번째 반복문은 n번의 연산이 필요하지만, 두 번째 반복문은 n^2번의 연산이 필요함. 따라서 O(n^2)에 비례하는 시간이 걸림.<br>

**:pushpin: 10번**

n번의 연산이 필요한 반복문이 3번 중첩되기 때문에 O(n^3)에 비례하는 시간이 걸림.<br>
