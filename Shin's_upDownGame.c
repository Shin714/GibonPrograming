void upDownGame()
{
	int nAnswer;
	int nGuess;
	int nTrialCount = 0;

	nAnswer = rand() % 100 + 1;

	printf("\n\n");
	printf("\t================================\n");
	printf("\t          UP DOWN GAME\n");
	printf("\t================================\n");
	printf("\n\n");

	while (TRUE) {

		printf("\n\t--------------------------------\n\n");
		nTrialCount++;
		printf("\tGuess the number!\n");
		printf("\t>>");
		scanf("%d", &nGuess);

		printf("\n\t--------------------------------\n");

		if (nGuess == 0) {
			printf("\tFAILDED!!\n");
			printf("\tAnswer was %d\n", nAnswer);
			break;
		}

		if (nGuess > nAnswer) printf("\n\tDOWN");
		else if (nGuess < nAnswer) printf("\n\tUP");
		else {
			printf("\tSUCCESS!!\n");
			printf("\tYou succeeded in %d tries\n", nTrialCount);
			break;
		}


	}
} // upDownGame()
