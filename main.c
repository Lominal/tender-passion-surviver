#include <stdio.h>

int e = 0;//스토리진행에 필요한 엔터의 역할을 하는 변수

void nextEnter() {
    printf("계속 진행하려면 'Enter'를 누르세요.");
    scanf("%c", &e);
    if (e == 10) { "|n"; }
}

int main(void) {
    char a[5] = {'N', 'a', 'r', 'a', 'e'};
    char b[5] = {'D', 'a', 'y', 'u', 'n'};
    char c[4] = {'J', 'i', 'n', 'a'};
    int favor = 0;//호감도를 나타내는 변수
    int ch = 0;//히로인 선택을 위한 변수

    printf("이 게임은 당신의 미연시 실력을 키워줄 '연애 서바이버' 게임입니다.");
    printf("어차피 이번 생에서 여자친구를 사귀기에 이미 늦은 당신!");
    nextEnter();
    printf("이 연애 서바이버에서라도 여자친구를 성공하기를 기원합니다!!");
    nextEnter();
    printf("만든 사람: 강동현");
    nextEnter();
    printf("이 게임을 만드는데 도움을 주신 많은 분들께 감사합니다.");
    nextEnter();
    printf("당신의 그녀를 선택하세요!");
    nextEnter();
    printf("1.Narae|n2.Dayun|n3.Jina");
    scanf("%c", &ch);
    if (ch == 1) {
        printf(" Narae를 선택하셨습니다.");
        nextEnter();
        printf("이제부터 연애 서바이버는 나래를 당신의 썸녀로 만들어 줄 것입니다.");
        nextEnter();
        printf("그녀와 5일간 여러 대화를 하며 선택지를 잘 골라 호감도를 80이상으로 유지하십시오!");
        nextEnter();
        printf("호감도 80이상으로 5일을 마치면 커플이 될 수 있지만");
        nextEnter();
        printf("호감도 80 미만이면 당신은 썸에 실패하여 솔로라며 평생을 놀림받으며 살아갈 것입니다!");
        nextEnter();
        printf("그동안의 삶 동안 솔로로 살던 당신의 핑크빛 연애 생활을 기원합니다. 건투를 빕니다!");
        nextEnter();
        printf("준비완료.");
        nextEnter();
        printf("...");
        nextEnter();
        printf("따르르르르르르릉!");
        nextEnter();
        printf("....");
        nextEnter();
    }
}