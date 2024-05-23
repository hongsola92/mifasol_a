import random  # 랜덤 숫자를 생성하기 위해 random 모듈을 임포트
import pygame  # pygame 모듈을 임포트

# 상수 선언
WIDTH = 640  # 게임 창의 너비
HEIGHT = 480  # 게임 창의 높이
TITLE = "Simple Game"  # 게임 창의 제목

# 파란 원 클래스 정의 (pygame.sprite.Sprite 상속)
class BlueCircle(pygame.sprite.Sprite):
    def __init__(self, group):
        super().__init__(group)  # 부모 클래스 초기화
        # 원의 초기 위치, 반지름, 속도, 색상 설정
        self.x = random.randint(0, WIDTH)
        self.y = random.randint(0, HEIGHT)
        self.radius = random.randint(10, 20)
        self.speed = random.randint(1, 3)
        self.color = (0, 0, 255)  # 파란색

        # 원의 위치와 크기 설정 (rect)
        self.rect = pygame.Rect(self.x, self.y, self.radius * 2, self.radius * 2)
        # 원의 이미지 생성
        self.image = pygame.Surface((self.radius * 2, self.radius * 2))
        self.image.fill((255, 255, 255))  # 배경 흰색으로 채우기
        pygame.draw.circle(self.image, self.color, (self.radius, self.radius), self.radius)  # 원 그리기
        self.image.set_colorkey((255, 255, 255))  # 흰색을 투명하게 설정

    def update(self):
        # 원의 위치 업데이트
        self.rect.center = (self.x, self.y)
        self.x += self.speed
        if self.x > WIDTH:  # 화면 오른쪽을 벗어나면
            self.x = 0
        if self.y > HEIGHT:  # 화면 아래를 벗어나면
            self.y = 0
        if self.x < 0:  # 화면 왼쪽을 벗어나면
            self.x = WIDTH
        if self.y < 0:  # 화면 위를 벗어나면
            self.y = HEIGHT

# 게임 클래스 정의
class Game:
    def __init__(self):
        pygame.init()  # pygame 초기화
        pygame.display.set_caption(TITLE)  # 게임 창 제목 설정
        self.screen = pygame.display.set_mode((WIDTH, HEIGHT))  # 게임 창 설정
        self.clock = pygame.time.Clock()  # 게임의 프레임 레이트 설정
        self.all_sprites = pygame.sprite.Group()  # 모든 스프라이트를 담을 그룹 생성
        for _ in range(30):  # 30개의 파란 원 생성
            self.all_sprites.add(BlueCircle(self.all_sprites))

    def run(self):
        # 게임 루프 실행
        while True:
            self.clock.tick(60)  # 60 프레임으로 설정
            self.event()  # 이벤트 처리
            self.update()  # 게임 상태 업데이트
            self.draw()  # 화면에 그리기

    def event(self):
        # 이벤트 처리 (게임 종료 등)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:  # 창 닫기 버튼 클릭 시
                pygame.quit()  # pygame 종료
                exit()  # 프로그램 종료

    def update(self):
        # 모든 스프라이트 업데이트
        self.all_sprites.update()

    def draw(self):
        # 화면을 흰색으로 지우기
        self.screen.fill((255, 255, 255))
        # 모든 스프라이트 그리기
        self.all_sprites.draw(self.screen)
        # 화면 업데이트
        pygame.display.update()

# 메인 함수 정의
def main():
    game = Game()  # 게임 객체 생성
    game.run()  # 게임 실행

# 메인 함수 실행
if __name__ == "__main__":
    main()
