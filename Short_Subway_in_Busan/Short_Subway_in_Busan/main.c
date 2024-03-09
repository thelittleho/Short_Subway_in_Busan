#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Station.h"


// 기본 구조
// 경로의 정보를 저장
typedef struct Route_info_S
{
	// 부모 정점(parent vertex)
	int parent_vertex;
	// 자식 정점(child vertex)
	int child_vertex;
} ROUTES;

// Dijkstra 알고리즘 함수
void Dijkstra();
// 인덱스를 받아 해당하는 역의 이름을 반환하는 함수
char* EnumToStationname();

// 노포 ~ ?까지의 역 정보 출력
int main(void)
{
	Dijkstra(노포, 사상);
	return 0;
}

void Dijkstra(int _startV, int _endV)
{
	// 정점 방문 테이블 False으로 설정
	bool visited_vertex[VERTEX_COUNT] = { 0 };
	int distance[VERTEX_COUNT];
	ROUTES routes[VERTEX_COUNT] = { 0 };

	// 초기 거리(distance)를 0로 설정한다
	for (int i = 0; i < VERTEX_COUNT; i++)
	{
		distance[i] = INF;
	}

	// 시작 정점에서 다른 정점으로의 초기 거리를 배열에 설정
	for (int i = 0; i < VERTEX_COUNT; i++)
	{
		if (station_weight[_startV][i] != INF) 
		{
			distance[i] = station_weight[_startV][i];
		}
	}
	// 시작 정점을 방문한 것으로 표시
	visited_vertex[_startV] = true;
	// 시작 정점을 부모 정점으로 설정
	routes[_startV].parent_vertex = _startV;

	// 현재 정점 == 시작 정점
	int currentV = _startV;
	// 모든 정점 방문
	for (int i = 0; i < VERTEX_COUNT - 1; i++)
	{
		int min = INF;
		int minIndex = currentV;

		// 최단 거리를 갱신하는 과정을 수행
		for (int i = 0; i < VERTEX_COUNT; i++)
		{
			// visited_vertex가 False인 경우
			if(!visited_vertex[i])
			{
				if (min > distance[i])
				{
					min = distance[i];
					minIndex = i;
				}
			}
		}

		currentV = minIndex;
		visited_vertex[currentV] = true;

		for (int i = 0; i < VERTEX_COUNT; i++)
		{
			if (!visited_vertex[i])
			{
				if (distance[currentV] + station_weight[currentV][i] < distance[i])
				{
					// 현재 정점에서 다음 정점으로 가는 경로
					routes[currentV].child_vertex = i;
					// 정점의 부모 정점
					routes[i].parent_vertex = currentV;
					// 현재까지의 최단 거리를 업데이트
					distance[i] = distance[currentV] + station_weight[currentV][i];
				}
			}
		}
	}

	// 경로를 저장하기 위한 배열
	int routeStack[VERTEX_COUNT] = { 0 };
	// 경로 스택에 저장된 정점의 개수
	int RoutesCount = 0;
	// 경로 스택에 도착 정점 _endV를 추가하고 RoutesCount를 증가시키는 과정
	routeStack[RoutesCount++] = _endV;
	int now = _endV;

	while (1)
	{
		// 부모 정점과 시작정점이 같다. == 종료
		if (routes[now].parent_vertex == _startV)
		{
			routeStack[RoutesCount++] = _startV;
			break;
		}
		//  현재 정점을 부모 정점으로 업데이트하고 경로 스택에 추가
		now = routes[now].parent_vertex;
		routeStack[RoutesCount++] = now;
	}

	// 역 정보 출력
	// 경로는 routeStack 배열에 역순으로 저장
	for (int i = RoutesCount - 1; i >= 0; i--)
	{
		if (i == RoutesCount - 1)
		{
			printf("|%s| → ", EnumToStationname(routeStack[i]));
		}
		else if (i == 0)
		{
			printf("|%s|", EnumToStationname(routeStack[i]));
		}
		else
		{
			printf("|%s| → ", EnumToStationname(routeStack[i]));
		}
	}
}

char* EnumToStationname(int _vertexIndex)
{
	enum station s = _vertexIndex;
	switch (s)
	{
	case 노포:
		return "노포역";
	case 부산대:
		return "부산대역";
	case 동래:
		return "동래역";
	case 교대:
		return "교대역";
	case 연산:
		return "연산역";
	case 서면:
		return "서면역";
	case 부산역:
		return "부산역";
	case 남포:
		return "남포역";
	case 사하:
		return "사하역";
	case 하단:
		return "하단역";
	case 다대포해수욕장:
		return "다대포해수욕장역";
	case 양산:
		return "양산역";
	case 부산대양산캠퍼스:
		return "부산대양산캠퍼스역";
	case 덕천:
		return "덕천역";
	case 구남:
		return "구천역";
	case 사상:
		return "사상역";
	case 동의대:
		return "동의대역";
	case 국제금융센터·부산은행:
		return "국제금융센터·부산은행역";
	case 대연:
		return "대연역";
	case 수영:
		return "수영역";
	case 벡스코:
		return "벡스코역";
	case 해운대:
		return "해운대역";
	case 장산:
		return "장산역";
	case 대저:
		return "대저역";
	case 구포:
		return "구포역";
	case 남산정:
		return "남산정역";
	case 미남:
		return "미남역";
	case 사직:
		return "사직역";
	case 거제:
		return "거제역";
	case 배산:
		return "배산역";
	case 안평:
		return "안평역";
	case 공항:
		return "공항역";
	case 대사:
		return "대사역";
	case 봉황:
		return "봉황역";
	case 가야대:
		return "가야대역";
	case 부전:
		return "부전역";
	case 안락:
		return "안락역";
	case 기장:
		return "기장역";
	case 덕하:
		return "덕하역";
	case 태화강:
		return "태화강역";
	default:
		return "존재하는 역이 없습니다.";
	}
}

