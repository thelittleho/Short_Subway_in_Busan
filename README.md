<img width="100%" src="https://i.pinimg.com/originals/62/33/2d/62332d52843de1fb48d463735a91ffda.gif"/>

# MINI PROJECT : Busan subway shortest distance in Dijkstra Algorithm
### This program is a mini-project that will be created using the Dijkstra Algorithm and C language.  

### And the reason why I made this program was that I wanted to make a small project through a discrete algorithm that I learned at university to study alone, and among them, I was most impressed by the Dijkstra algorithm, I am planning to make the shortest route of Busan subway.  

## Checklist
|Checklist|Check|
|---------|----|
|**A study of Dijkstra Algorithm**|✅|
|**A Survey of the Distance Between Subway in Busan**|✅|
|**realization**|❌|
***


<br>

[[REFERENCE1] : Dijkstra Algorithm](https://velog.io/@717lumos/알고리즘-다익스트라Dijkstra-알고리즘)

<br>

## Dijkstra Algorithm
![Dijkstra_Algorithm](https://github.com/FreshSider04/Short_Subway_in_Busan/assets/120298512/7c2f57d0-3a0a-4c85-ad26-03c2b01dfff0)
***

<br>

## A Survey of the Distance Between Subway in Busan
![image](https://github.com/FreshSider04/Short_Subway_in_Busan/assets/120298512/985a0e08-85e8-4cef-984e-d7c10fec42e2)


     1호선 (노포동~다대포해수욕장 41.4km)

**노포** <-- 6.2km --> **부산대** <-- 2.9km --> **동래** <-- 1.2km --> **교대** <-- 1.0km --> **연산** <-- 8.2km --> **서면** <-- 5.2km --> **부산역** <-- 2.0km --> **남포** <-- 6.7km --> **사하** <-- 1.7km --> **하단** <-- 10.5km -> **다대포해수욕장**
#

     2호선 (양산~장산 45.2km)

**양산** <-- 2.7km --> **부산대양산캠퍼스** <-- 12.7km --> **덕천** <-- 1.9km --> **구남** <-- 4.1km --> **사상** <-- 5.1km --> **동의대** <-- 2.4km --> **서면** <-- 1.9km -->**국제금융센터·부산은행역**<-- 3.2km --> **대연** <-- 4.4km --> **수영** <-- 2.7km --> **벡스코** <-- 2.3km --> **해운대** <-- 1.9km --> **장산**
 #
     3호선 (대저~수영 18.1km)

**대저** <-- 3.5km --> **구포** <-- 1.1km --> **덕천** <-- 1.7km --> **남산정** <-- 4.5km --> **미남** <-- 0.8km --> **사직** <-- 1.5km --> **거제** <-- 0.7km --> **연산** <-- 2.2km --> **배산** <-- 2.2km --> **수영**
 #
      4호선 (미남~안평 12km)

**미남** <-- 1.0km --> **동래** <-- 11km --> **안평**
#
    부산김해선 (사상~가야대 22.6km)
  **사상** <-- 4km --> **공항** <-- 5.2km--> **대저** <-- 2.2km --> **대사** <-- 6.5km --> **봉황** <-- 4.7km --> **가야대**
#
    동해선 광역철도 (부전~태화강 63.8km)
**부전** <-- 3.3km --> **거제** <-- 0.7km --> **교대** <-- 2.1km --> **안락** <-- 4.7km --> **벡스코** <-- 14.2km --> **기장** <-- 31.5km --> **덕하** <-- 7.3km --> **태화강**
#
-- **환승 역**--
- 동래역(부산 1호선, 부산 4호선)
- 교대역(부산 1호선, 동해선 광역철도)
- 연산역(부산 1호선, 부산 3호선)
- 서면역(부산 1호선, 부산 2호선)
- 덕천역(부산 2호선, 부산 3호선)
- 사상역(부산2호선, 부산-김해 경전철)
- 수영역(부산 2호선, 부산 3호선)
- 벡스코역(부산 2호선, 동해선 광역철도)
- 대저역(부산 3호선, 부산-김해 경전철)
- 미남역(부산 3호선, 부산 4호선)
- 거제역(부산 3호선, 동해선 광역철도)
#

부산 1호선 간선 : 10개  
부산 2호선 간선 : 12개  
부산 3호선 간선 : 9개  
부산 4호선 간선 : 13개  

부산-김해 경전철 간선 : 5개  
동해선 광역전철 간선 : 7개  
  
총 간선(vertex) : 56개  

#
***  

## realization
### 간단 구형도
```C
#include <stdio.h>

#define vertex 152

#define INFINTE_NUM 2147483647

void dijkstra (int graph[vertex][vertex], int start)
{
     ① 출발 노드와 도착 노드를 설정
     ② '최단 거리 테이블'을 초기화
     ③ 현재 위치한 노드의 인접 노드 중 방문하지 않은 노드를 구별하고, 방문하지 않은 노드 중 거리가 가장 짧은 노드를 선택한다. 그 노드를 방문 처리한다.
     ④ 해당 노드를 거쳐 다른 노드로 넘어가는 간선 비용(가중치)을 계산해 '최단 거리 테이블'을 업데이트한다.
     ⑤ ③~④의 과정을 반복한다.
}

void main(int)
{
     
}
```
*** 

