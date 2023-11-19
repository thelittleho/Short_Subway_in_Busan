// basic header file
#include <stdio.h>
#include <string.h>

#include "Dijkstra.h"

#pragma warning(disable:4996)

// defione basic variable
char start_station[18];
char end_station[18];
int start_station_num = 0;
int end_station_num = 0;

int start_ConvertStationNum()
{
    // 노포
    if (strcmp(start_station, "노포\n") == 0 || strcmp(start_station, "노포역\n") == 0)
    {
        return start_station_num = 0;
    }

    // 부산대
    else if (strcmp(start_station, "부산대\n") == 0 || strcmp(start_station, "부산대역\n") == 0)
    {
        return start_station_num = 1;
    }

    // 동래
    else if (strcmp(start_station, "동래\n") == 0 || strcmp(start_station, "동래역\n") == 0)
    {
        return start_station_num = 2;
    }

    // 교대
    else if (strcmp(start_station, "교대\n") == 0 || strcmp(start_station, "교대역\n") == 0)
    {
        return start_station_num = 3;
    }

    // 연산
    else if (strcmp(start_station, "연산\n") == 0 || strcmp(start_station, "연산역\n") == 0)
    {
        return start_station_num = 4;
    }

    // 서면
    else if (strcmp(start_station, "서면\n") == 0 || strcmp(start_station, "서면역\n") == 0)
    {
        return start_station_num = 5;
    }

    // 부산역
    else if (strcmp(start_station, "부산역\n") == 0)
    {
        return start_station_num = 6;
    }

    // 남포
    else if (strcmp(start_station, "남포\n") == 0 || strcmp(start_station, "남포역\n") == 0)
    {
        return start_station_num = 7;
    }
    
    // 사하
    else if (strcmp(start_station, "사하\n") == 0 || strcmp(start_station, "사하역\n") == 0)
    {
        return start_station_num = 8;
    }

    // 하단
    else if (strcmp(start_station, "하단\n") == 0 || strcmp(start_station, "하단역\n") == 0)
    {
        return start_station_num = 9;
    }

    // 다대포해수욕장
    else if (strcmp(start_station, "다대포해수욕장\n") == 0 || strcmp(start_station, "다대포해수욕장역\n") == 0)
    {
        return start_station_num = 10;
    }

    // 양산
    else if (strcmp(start_station, "양산\n") == 0 || strcmp(start_station, "양산역\n") == 0)
    {
        return start_station_num = 11;
    }

    // 부산대양산캠퍼스
    else if (strcmp(start_station, "부산대양산캠퍼스\n") == 0 || strcmp(start_station, "부산대양산캠퍼스역\n") == 0)
    {
        return start_station_num = 12;
    }

    // 덕천
    else if (strcmp(start_station, "덕천\n") == 0 || strcmp(start_station, "덕천역\n") == 0)
    {
        return start_station_num = 13;
    }

    //구남
    else if (strcmp(start_station, "구남\n") == 0 || strcmp(start_station, "구남역\n") == 0)
    {
        return start_station_num = 14;
    }

    // 사상
    else if (strcmp(start_station, "사상\n") == 0 || strcmp(start_station, "사상역\n") == 0)
    {
        return start_station_num = 15;
    }

    // 동의대
    else if (strcmp(start_station, "동의대\n") == 0 || strcmp(start_station, "동의대역\n") == 0)
    {
        return start_station_num = 16;
    }

    // 국제금융센터부산은행
    else if (strcmp(start_station, "국제금융센터부산은행\n") == 0 || strcmp(start_station, "국제금융센터부산은행역\n") == 0 || strcmp(start_station, "국제금융센터·부산은행\n") == 0 || strcmp(start_station, "국제금융센터·부산은행역\n") == 0 || strcmp(start_station, "국제금융센터\n") == 0 || strcmp(start_station, "국제금융센터역\n") == 0 || strcmp(start_station, "부산은행\n") == 0 || strcmp(start_station, "부산은행역\n") == 0)
    {
        return start_station_num = 17;
    }

    // 대연
    else if (strcmp(start_station, "대연\n") == 0 || strcmp(start_station, "대연역\n") == 0)
    {
        return start_station_num = 18;
    }

    // 수영
    else if (strcmp(start_station, "수영\n") == 0 || strcmp(start_station, "수영역\n") == 0)
    {
        return start_station_num = 19;
    }

    // 벡스코
    else if (strcmp(start_station, "벡스코\n") == 0 || strcmp(start_station, "벡스코\n") == 0)
    {
        return start_station_num = 20;
    }

    // 해운대
    else if (strcmp(start_station, "해운대\n") == 0 || strcmp(start_station, "해운대역\n") == 0)
    {
        return start_station_num = 21;
    }

    // 장산
    else if (strcmp(start_station, "장산\n") == 0 || strcmp(start_station, "장산역\n") == 0)
    {
        return start_station_num = 22;
    }

    // 대저
	else if (strcmp(start_station, "대저\n") == 0 || strcmp(start_station, "대저역\n") == 0)
	{
		return start_station_num = 23;
    }

    // 구포
	else if (strcmp(start_station, "구포\n") == 0 || strcmp(start_station, "구포역\n") == 0)
	{
		return start_station_num = 24;
	}

    // 남산정
	else if (strcmp(start_station, "남산정\n") == 0 || strcmp(start_station, "남산정역\n") == 0)
	{
		return start_station_num = 25;
	}

    // 미남
	else if (strcmp(start_station, "미남\n") == 0 || strcmp(start_station, "미남역\n") == 0)
	{
		return start_station_num = 26;
	}

    // 사직
	else if (strcmp(start_station, "사직\n") == 0 || strcmp(start_station, "사직역\n") == 0)
	{
		return start_station_num = 27;
	}

    // 거제
	else if (strcmp(start_station, "거제\n") == 0 || strcmp(start_station, "거제역\n") == 0)
	{
		return start_station_num = 28;
	}

    // 배산
	else if (strcmp(start_station, "배산\n") == 0 || strcmp(start_station, "배산역\n") == 0)
	{
		return start_station_num = 29;
	}

    // 안평
	else if (strcmp(start_station, "안평\n") == 0 || strcmp(start_station, "안평역\n") == 0)
	{
		return start_station_num = 30;
	}

    // 공항
	else if (strcmp(start_station, "공항\n") == 0 || strcmp(start_station, "공항역\n") == 0)
	{
		return start_station_num = 31;
	}

    // 대사
	else if (strcmp(start_station, "대사\n") == 0 || strcmp(start_station, "대사역\n") == 0)
	{
		return start_station_num = 32;
	}

    // 봉황
	else if (strcmp(start_station, "봉황\n") == 0 || strcmp(start_station, "봉황역\n") == 0)
	{
		return start_station_num = 33;
	}

    // 가야대
	else if (strcmp(start_station, "가야대\n") == 0 || strcmp(start_station, "가야대역\n") == 0)
	{
		return start_station_num = 34;
	}

    // 태화강
	else if (strcmp(start_station, "태화강\n") == 0 || strcmp(start_station, "태화강역\n") == 0)
	{
		return start_station_num = 35;
	}

    // 덕하
	else if (strcmp(start_station, "덕하\n") == 0 || strcmp(start_station, "덕하역\n") == 0)
	{
		return start_station_num = 36;
	}

    // 기장
	else if (strcmp(start_station, "기장\n") == 0 || strcmp(start_station, "기장역\n") == 0)
	{
		return start_station_num = 37;
	}

    // 안락
	else if (strcmp(start_station, "안락\n") == 0 || strcmp(start_station, "안락역\n") == 0)
	{
		return start_station_num = 38;
	}

    //부전
	else if (strcmp(start_station, "부전\n") == 0 || strcmp(start_station, "부전역\n") == 0)
	{
		return start_station_num = 39;
	}

    else
    {
        printf("\n출발(또는 도착) 역의 이름이 잘못되었습니다 다시 작성하여주십시오.\n");
        main();
    }
}
int end_ConvertStationNum()
{
    // 노포
    if (strcmp(end_station, "노포\n") == 0 || strcmp(end_station, "노포역\n") == 0)
    {
        return end_station_num = 0;
    }

    // 부산대
    else if (strcmp(end_station, "부산대\n") == 0 || strcmp(end_station, "부산대역\n") == 0)
    {
        return end_station_num = 1;
    }

    // 동래
    else if (strcmp(end_station, "동래\n") == 0 || strcmp(end_station, "동래역\n") == 0)
    {
        return end_station_num = 2;
    }

    // 교대
    else if (strcmp(end_station, "교대\n") == 0 || strcmp(end_station, "교대역\n") == 0)
    {
        return end_station_num = 3;
    }

    // 연산
    else if (strcmp(end_station, "연산\n") == 0 || strcmp(end_station, "연산역\n") == 0)
    {
        return end_station_num = 4;
    }

    // 서면
    else if (strcmp(end_station, "서면\n") == 0 || strcmp(end_station, "서면역\n") == 0)
    {
        return end_station_num = 5;
    }

    // 부산역
    else if (strcmp(end_station, "부산역\n") == 0)
    {
        return end_station_num = 6;
    }

    // 남포
    else if (strcmp(end_station, "남포\n") == 0 || strcmp(end_station, "남포역\n") == 0)
    {
        return end_station_num = 7;
    }

    // 사하
    else if (strcmp(end_station, "사하\n") == 0 || strcmp(end_station, "사하역\n") == 0)
    {
        return end_station_num = 8;
    }

    // 하단
    else if (strcmp(end_station, "하단\n") == 0 || strcmp(end_station, "하단역\n") == 0)
    {
        return end_station_num = 9;
    }

    // 다대포해수욕장
    else if (strcmp(end_station, "다대포해수욕장\n") == 0 || strcmp(end_station, "다대포해수욕장역\n") == 0)
    {
        return end_station_num = 10;
    }

    // 양산
    else if (strcmp(end_station, "양산\n") == 0 || strcmp(end_station, "양산역\n") == 0)
    {
        return end_station_num = 11;
    }

    // 부산대양산캠퍼스
    else if (strcmp(end_station, "부산대양산캠퍼스\n") == 0 || strcmp(end_station, "부산대양산캠퍼스역\n") == 0)
    {
        return end_station_num = 12;
    }

    // 덕천
    else if (strcmp(end_station, "덕천\n") == 0 || strcmp(end_station, "덕천역\n") == 0)
    {
        return end_station_num = 13;
    }

    //구남
    else if (strcmp(end_station, "구남\n") == 0 || strcmp(end_station, "구남역\n") == 0)
    {
        return end_station_num = 14;
    }

    // 사상
    else if (strcmp(end_station, "사상\n") == 0 || strcmp(end_station, "사상역\n") == 0)
    {
        return end_station_num = 15;
    }

    // 동의대
    else if (strcmp(end_station, "동의대\n") == 0 || strcmp(end_station, "동의대역\n") == 0)
    {
        return end_station_num = 16;
    }

    // 국제금융센터부산은행
    else if (strcmp(end_station, "국제금융센터부산은행\n") == 0 || strcmp(end_station, "국제금융센터부산은행역\n") == 0 || strcmp(end_station, "국제금융센터·부산은행\n") == 0 || strcmp(end_station, "국제금융센터·부산은행역\n") == 0 || strcmp(end_station, "국제금융센터\n") == 0 || strcmp(end_station, "국제금융센터역\n") == 0 || strcmp(end_station, "부산은행\n") == 0 || strcmp(end_station, "부산은행역\n") == 0)
    {
        return end_station_num = 17;
    }

    // 대연
    else if (strcmp(end_station, "대연\n") == 0 || strcmp(end_station, "대연역\n") == 0)
    {
        return end_station_num = 18;
    }

    // 수영
    else if (strcmp(end_station, "수영\n") == 0 || strcmp(end_station, "수영역\n") == 0)
    {
        return end_station_num = 19;
    }

    // 벡스코
    else if (strcmp(end_station, "벡스코\n") == 0 || strcmp(end_station, "벡스코\n") == 0)
    {
        return end_station_num = 20;
    }

    // 해운대
    else if (strcmp(end_station, "해운대\n") == 0 || strcmp(end_station, "해운대역\n") == 0)
    {
        return end_station_num = 21;
    }

    // 장산
    else if (strcmp(end_station, "장산\n") == 0 || strcmp(end_station, "장산역\n") == 0)
    {
        return end_station_num = 22;
    }

    // 대저
    else if (strcmp(end_station, "대저\n") == 0 || strcmp(end_station, "대저역\n") == 0)
    {
        return end_station_num = 23;
    }

    // 구포
    else if (strcmp(end_station, "구포\n") == 0 || strcmp(end_station, "구포역\n") == 0)
    {
        return end_station_num = 24;
    }

    // 남산정
    else if (strcmp(end_station, "남산정\n") == 0 || strcmp(end_station, "남산정역\n") == 0)
    {
        return end_station_num = 25;
    }

    // 미남
    else if (strcmp(end_station, "미남\n") == 0 || strcmp(end_station, "미남역\n") == 0)
    {
        return end_station_num = 26;
    }

    // 사직
    else if (strcmp(end_station, "사직\n") == 0 || strcmp(end_station, "사직역\n") == 0)
    {
        return end_station_num = 27;
    }

    // 거제
    else if (strcmp(end_station, "거제\n") == 0 || strcmp(end_station, "거제역\n") == 0)
    {
        return end_station_num = 28;
    }

    // 배산
    else if (strcmp(end_station, "배산\n") == 0 || strcmp(end_station, "배산역\n") == 0)
    {
        return end_station_num = 29;
    }

    // 안평
    else if (strcmp(end_station, "안평\n") == 0 || strcmp(end_station, "안평역\n") == 0)
    {
        return end_station_num = 30;
    }

    // 공항
    else if (strcmp(end_station, "공항\n") == 0 || strcmp(end_station, "공항역\n") == 0)
    {
        return end_station_num = 31;
    }

    // 대사
    else if (strcmp(end_station, "대사\n") == 0 || strcmp(end_station, "대사역\n") == 0)
    {
        return end_station_num = 32;
    }

    // 봉황
    else if (strcmp(end_station, "봉황\n") == 0 || strcmp(end_station, "봉황역\n") == 0)
    {
        return end_station_num = 33;
    }

    // 가야대
    else if (strcmp(end_station, "가야대\n") == 0 || strcmp(end_station, "가야대역\n") == 0)
    {
        return end_station_num = 34;
    }

    // 태화강
    else if (strcmp(end_station, "태화강\n") == 0 || strcmp(end_station, "태화강역\n") == 0)
    {
        return end_station_num = 35;
    }

    // 덕하
    else if (strcmp(end_station, "덕하\n") == 0 || strcmp(end_station, "덕하역\n") == 0)
    {
        return end_station_num = 36;
    }

    // 기장
    else if (strcmp(end_station, "기장\n") == 0 || strcmp(end_station, "기장역\n") == 0)
    {
        return end_station_num = 37;
    }

    // 안락
    else if (strcmp(end_station, "안락\n") == 0 || strcmp(end_station, "안락역\n") == 0)
    {
        return end_station_num = 38;
    }

    //부전
    else if (strcmp(end_station, "부전\n") == 0 || strcmp(end_station, "부전역\n") == 0)
    {
        return end_station_num = 39;
    }

    else
    {
        printf("\n도착 역의 이름이 잘못되었습니다 다시 작성하여주십시오.\n");
        main();
    }
}

int main(void) {
    int graph[V][V] =
    {
        {0, 13, 0},
        {0, 13, 2},
        {0, 0, 2}
    };

    //float graph[edge][vertex] = {
    //    // 노포역
    //    {6.2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 부산대역
    //    {6.2,2.9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 동래역
    //    {0,2.9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1.0,11.0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 교대역
    //    {0,0,1.2,1.0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2.1,0.7,0},
    //    // 연산역
    //    {0,0,0,1.0,8.2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.7,2.2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 서면역
    //    {0,0,0,0,8.2,5.2,0,0,0,0,0,0,0,0,0,2.4,1.9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 부산역
    //    {0,0,0,0,0,5.2,2.0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 남포역
    //    {0,0,0,0,0,0,2.0,6.7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 사하역
    //    {0,0,0,0,0,0,0,6.7,1.7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 하단역
    //    {0,0,0,0,0,0,0,0,1.7,7.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 다대포해수욕장역
    //    {0,0,0,0,0,0,0,0,0,7.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 양산역
    //    {0,0,0,0,0,0,0,0,0,0,2.7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 부산대양산캠퍼스역
    //    {0,0,0,0,0,0,0,0,0,0,2.7,12.7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 덕천역
    //    {0,0,0,0,0,0,0,0,0,0,0,12.7,1.9,0,0,0,0,0,0,0,0,0,0,1.1,1.7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 구남역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 사상역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 동의대역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 국제금융센터·부산은행역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 대연역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 수영역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 벡스코역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 해운대역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 장산역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 대저역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 구포역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 남산정역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 미남역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 사직역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 거제역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 배산역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 안평역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 공항역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 대사역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 봉황역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 가야대역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 부전역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 안락역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 기장역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    //    // 덕하역
    //    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

    //};

    //printf("출발하고자하는 역의 이름을 입력하시오 : ");
    //fgets(start_station, sizeof(start_station), stdin);

    //printf("도착하고자하는 역의 이름을 입력하시오 : ");
    //fgets(end_station, sizeof(end_station), stdin);

    //start_station_num = start_ConvertStationNum(start_station);
    //end_station_num = end_ConvertStationNum(end_station);

    //printf("%d\n", start_station_num);
    //printf("%d\n", end_station_num);

    int start = 1; // 시작 노드 설정

    Dijkstra(graph, start);

    return 0;
}


