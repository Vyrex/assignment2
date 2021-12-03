#include <my_mat.h>

int main() {

	char userInput;
	scanf("%c", &userInput);
	int savedMatrix[][];
	int ShortestPathAnswer;

	while(userInput != 'D') {



		if (userInput == 'A') {
			savedMatrix = GraphBuilder();
		}

		if (userInput == 'B') {
			if (PathFind(savedMatrix) == 1) {
				printf("True");
			}
			else {
				printf("False");
			}
		}

		if (userInput == 'C') {
			ShortestPathAnswer = ShortestPath(savedMatrix);
			printf("%d", ShortestPathAnswer);
		}

		scanf("%c", &userInput);
	}

	return 0;

}
