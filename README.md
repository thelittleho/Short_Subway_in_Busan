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
![image](https://github.com/FreshSider04/Short_Subway_in_Busan/assets/120298512/ac2e1b91-62cb-4e19-9ad0-1f279355eb6d)  


     1호선 (노포동~다대포해수욕장 41.4km)

**노포** <-- 6.2km --> **부산대** <-- 2.9km --> **동래** <-- 1.2km --> **교대** <-- 1.0km --> **연산** <-- 8.2km --> **서면** <-- 5.2km --> **부산역** <-- 2.0km --> **남포** <-- 0.7km --><-- 1.0km --><-- 1.2km --><-- 0.7km --><-- 1.4km --><-- 0.8km --><--0.9km --> **사하** <-- 0.9km --><-- 0.8km --> **하단** <-- 10.5km -> **다대포해수욕장**
#

     2호선 (양산~장산 45.2km)

**양산** <-- 2.7km --> **부산대양산캠퍼스** <-- 12.7km --> **덕천** <-- 1.9km --> **구남** <-- 4.1km --> **사상** <-- 5.1km --> **동의대** <-- 2.4km --> **서면** <-- 1.1km --><-- 0.8km --><-- 0.8km --><-- 0.8km --><-- 0.9km --><-- 0.7km --> **대연** <-- 0.9km --><-- 0.8km --><-- 0.9km --> <-- 0.9km --><-- 0.9km --> **수영** <-- 0.9km --> **민락** <-- 1.0km --> **센텀시티** <-- 0.8km --> **시립미술관** <-- 1.1km --> **동백** <-- 1.2km --> **해운대** <-- 0.9km --> **중동** <-- 0.9km --> **장산**
 #
     3호선 (대저~수영 18.1km)

**대저** <-- 0.8km --> **체육공원** <-- 1.1km --> **강서구청** <-- 1.6km --> **구포** <-- 1.1km --> **덕천** <-- 0.7km --> **숙등** <-- 1.0km --> **남산정** <-- 1.1km --> **만덕** <-- 3.3km --> **미남** <-- 0.8km --> **사직** <-- 0.8km --> **종합운동장** <-- 0.7km --> **거제** <-- 0.7km --> **연산** <-- 1.1km --> **물만골** <-- 1.1km --> **배산** <-- 1.2km --> **망미** <-- 1.0km --> **수영**
 #
      4호선 (미남~안평 12km)

**미남** <-- 1.0km --> **동래** <-- 0.7km --> **수안** <-- 0.7km --> **낙민** <-- 0.7km --> **충렬사** <-- 0.7km --> **명장** <-- 1.0km --> **서동** <-- 0.8km --> **금사** <-- 0.8km --> **반여농산물사장** <-- 1.2km --> **석대** <-- 1.4km --> **영산대** <-- 1.1km --> **윗반송** <-- 0.8km --> **고촌** <-- 1.1km --> **안평**
#
    부산김해선 (사상~가야대 22.6km)
  **사상** <-- 0.8km --> **괴법르네시떼** <-- 2.3km --> **서부산유통지구** <-- 0.9km --> **공항** <-- 1.3km --> **덕두** <-- 1.9km --> **등구** <-- 2.0km--> **대저** <-- 1.0km --> **평강** <-- 1.2km --> **대사** <-- 1.1km --> **불암** <-- 0.7km --> **지내** <-- 0.8km --> **김해대학** <-- 1.3km --> **인제대** <-- 1.0km --> **김해시청** <-- 0.6km --> **부원** <-- 1.0km --> **봉황** <-- 0.7km --> **수로왕릉** <-- 0.8km --> **박물관** <-- 1.1.km --> **연지공원** <-- 1.2km --> ***장신대** <-- 0.9km --> **가야대**
#
    동해선 광역철도 (부전~태화강 63.8km)
**부전** <-- 2.3km --> **거제해맞이** <-- 1.0km --> **거제** <-- 0.7km --> **교대** <-- 1.2km --> **동래** <-- 0.9km --> **안락** <-- 1.3km --> **부산원동** <-- 1.0km --> **재송** <-- 1.0km --> **센텀** <-- 1.4km --> **벡스코** <-- 4.5km --> **신해운대** <-- 2.9km --> **송정** <-- 1.1km --> **오시리아** <-- 5.7km --> **기장** <-- 3.0km --> **일광** <-- 5.3km --> **좌천** <-- 3.4km --> **월내** <-- 2.5km --> **서생** <-- 8.4km --> **남창** <-- 4.4km --> **망양** <-- 4.5km --> **덕하** <-- 2.4km --> **개운포** <-- 4.9km --> **태화강**
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

부산 1호선 간선 : 39개  
부산 2호선 간선 : 42개  
부산 3호선 간선 : 16개  
부산 4호선 간선 : 13개  
  
부산-김해 경전철 간선 : 20개  
동해선 광역전철 간선 : 22개  
  
총 간선(vertex) : 152개  

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

