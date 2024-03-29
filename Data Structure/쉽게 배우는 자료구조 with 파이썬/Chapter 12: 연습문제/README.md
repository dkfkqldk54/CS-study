<h2>:pencil2: Exercises</h2>

**:pushpin: 1번**

m은 2^10으로 2의 멱수이다. 입력값을 2진수로 바꾸어 보았을 때, 주어진 입력값을 m으로 나누면 하위 10개의 비트에 의해서 해싯값이 결정될 것이다. 따라서 해싯값을 분산시키기에는 다소 부족한 점이 있다고 생각한다.<br>

**:pushpin: 2번**

h(x)는 x에 따라 확률적으로 고른 분포를 보이기는 할 것이다. 그러나 random(0, 10) 때문에 킷값에 따라 주소값을 산출하고자 할 때, 주소값은 매번 달라질 거시다. 그러므로 킷값과 주소의 연관성이 없으므로 해시 함수가 될 수 없다.<br>

**:pushpin: 3번**

random(x, 0, 1)에 의해서 킷값에 따라 동일한 주솟값이 산출되기는 할 것이다. 그러나 h(x)는 x=100일 때 0-99의 값, x=200일 때 0-199의 값, ... , x=1000일 때 0-999의 값을 가지게 되어 x가 작을 수록 h(x)도 작고, x가 클수록 h(x)도 커질 것이다. 따라서 x에 따른 h(x)의 값은 대체적으로 우상향하는 모양을 가지게 될 것이고, 주소값의 확률 분포는 고르지 않을 것이다. 이는 모든 주소 공간을 활용하는데 있어서 비효율적이라고 생각한다.

**:pushpin: 4번**

[ [33], [40], [46], [], [30], [], [50], [20], [60], [], [10], [], [] ]

**:pushpin: 5번**

[ [33], [40], [46], [], [30], [], [50], [20], [60], [], [10], [], [] ]

**:pushpin: 6번**

[ [33], [40], [46], [], [30], [], [50], [20], [60], [], [10], [], [] ]

**:pushpin: 7번**

**맨 앞에 삽입하는 경우**<br>

헤드 노드는 새로운 노드를, 새로운 노드는 1번 노드를 가리키게 하면 된다. 헤드 노드와 1번 노드를 찾는데 걸리는 시간은 상수 시간이므로 삽입에도 상수 시간이 소요된다.

**맨 뒤에 삽입하는 경우**<br>

마지막 노드는 새로운 노드를, 새로운 노드는 헤드 노드를 가리키게 하면 된다. 연결 리스트에 있는 노드의 개수를 n이라 했을 때, 마지막 노드까지 레퍼런스를 타고 가는 시간이 O(n)이므로 상수
시간보다 더 많은 시간이 소모된다. 따라서 맨 앞에 삽입하는 경우보다 효율성이 떨어진다.

**:pushpin: 8번**

연결 리스트에 있는 원소의 개수를 n이라 하겠다.

**삽입**<br>

기존에는 시간 복잡도가 O(1)이었으나 정렬을 하게 되면 비교하는 작업이 필요하므로 Ω(log n)으로 시간복잡도가 증가하게 된다.

**삭제**<br>

기존에는 삭제할 원소를 찾는 작업에 O(n)의 시간이 걸렸지만, 정렬이 되어 있으면 O(log n)까지 시간 복잡도를 줄일 수 있음.

**성공적인 검색**<br>

시간 복잡도는 O(1)로 변하지 않음.

**실패하는 검색**<br>

삭제와 마찬가지로 기존에 O(n)이었지만 정렬이 되면 O(log n)까지 시간을 줄일 수 있음.

**:pushpin: 9번**

f(x)와 m이 최소 공약수 d를 가지면 i*f(x)를 m으로 나눈 나머지들의 집합은 {a, a+d, a+2d, ..., a+nd}이다. (0<=a<d, a+nd<m)<br>
이 집합이 a를 기준으로 d만큼씩 점프한 값들의 집합이므로, i*f(x)를 더함으로써 볼 수 있는 테이블은 전체의 1/d밖에 되지 않는 것이다.<br>

**:pushpin: 10번**

주어진 수열이 주솟값 0번부터 49번까지 순서대로 저장될 것이다. 0-9번에 있는 값은 1-10번의 검색을, 10-19번에 있는 값은 10-19번의 검색을, 20-29번에 있는 값은 19-28번의 검색을, 30-39번에 있는 값은 28-37번의 검색을, 40-49번에 있는 값은 37-46번의 검색을 해야한다. 따라서 평균 23.5회 검색을 해야한다.
