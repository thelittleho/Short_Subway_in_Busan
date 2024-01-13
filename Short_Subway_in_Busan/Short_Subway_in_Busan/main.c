#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Station.h"
#include "Dijkstra.h"

char* vertexToStationName(int _vertexIndex);
typedef struct _tagRoutePair
{
	int ParentV;
	int ChildV;
} ROUTEPAIR;

void Dijkstra(int _startV, int _endV)
{
	bool visited[VERTEX_COUNT] = { 0 };
	int distance[VERTEX_COUNT];
	ROUTEPAIR routePairs[VERTEX_COUNT] = { 0 };

	for (int i = 0; i < VERTEX_COUNT; i++)
	{
		distance[i] = INF;
	}

	for (int i = 0; i < VERTEX_COUNT; i++)
	{
		if (station_weight[_startV][i] != INF) 
		{
			distance[i] = station_weight[_startV][i];
		}
	}

	visited[_startV] = true;
	routePairs[_startV].ParentV = _startV;

	int currentV = _startV;
	for (int i = 0; i < VERTEX_COUNT - 1; i++)
	{
		int min = INF;
		int minIndex = currentV;

		for (int i = 0; i < VERTEX_COUNT; i++)
		{
			if(!visited[i])
			{
				if (min > distance[i])
				{
					min = distance[i];
					minIndex = i;
				}
			}
		}

		currentV = minIndex;
		visited[currentV] = true;

		for (int i = 0; i < VERTEX_COUNT; i++)
		{
			if (!visited[i])
			{
				if (distance[currentV] + station_weight[currentV][i] < distance[i])
				{
					routePairs[currentV].ChildV = i;
					routePairs[i].ParentV = currentV;

					distance[i] = distance[currentV] + station_weight[currentV][i];
				}
			}
		}
	}

	int routeStack[VERTEX_COUNT] = { 0 };
	int RoutesCount = 0;
	routeStack[RoutesCount++] = _endV;
	int now = _endV;

	while (1)
	{
		if (routePairs[now].ParentV == _startV)
		{
			routeStack[RoutesCount++] = _startV;
			break;
		}
		now = routePairs[now].ParentV;
		routeStack[RoutesCount++] = now;
	}

	for (int i = RoutesCount - 1; i >= 0; i--)
	{
		if (i == RoutesCount - 1)
		{
			printf("|%s| → ", vertexToStationName(routeStack[i]));
		}
		else if (i == 0)
		{
			printf("|%s|", vertexToStationName(routeStack[i]));
		}
		else
		{
			printf("|%s| → ", vertexToStationName(routeStack[i]));
		}
	}
}

char* vertexToStationName(int _vertexIndex)
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
int main(void)
{
	Dijkstra(부산대, 노포);
	printf("\n");
	printf("평균 속도 = %lf", station_weight[23][24]);
	return 0;
}


