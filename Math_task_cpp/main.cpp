#include <iostream>
#include "Game.h"
#include <time.h>
#include <signal.h>


_crt_signal_t stopGame(Game g) {
	std::cout << g.stopAndShowResults() << std::endl;
	system("pause");
	exit(0);
}

int main() {
	Game g(1, 10);
	//signal(SIGINT, stopGame(g));
	while (1) {
		g.restart();
		while (g.AnswerCount() < 10) {
			int userAnswer;
			g.generateNewTask();
			std::cout << g.showTask();
			std::cin >> userAnswer;
			while (!g.acceptUserAnswer(userAnswer)) {
				std::cout << "What?" << std::endl;
				std::cin >> userAnswer;
			}
			std::cout << "Right!" << std::endl;
		}
		std::cout << g.stopAndShowResults() << std::endl;
	}
	system("pause");
}