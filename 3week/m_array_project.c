#include <stdio.h>
#include <time.h>
int arrayAnimal[4][5]; //朝球 走亀(4x5 =20舌)
int checkAnimal[4][5]; // 及増微 朝球 食採
char * strAnimal[10]; //疑弘 戚硯(曽嫌) 壕伸聖 匂昔斗稽 
char* cPtr = "砺什闘";
void initAnimalArray(); //疑弘 壕伸持失 
void initAnimalName(); //疑弘 戚硯 持失
void shuffleAnimal(); //疑弘朝球 偲巴
int getEmptyPosition(); //疎妊拭辞 朔因娃 達奄
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();


// 10原軒税 辞稽 陥献 疑弘(唖 朝球 2舌梢)
// 紫遂切稽採斗 2鯵税 脊径葵聖 閤焼辞 -> 旭精 疑弘 達生檎 朝球 及増奄
// 乞窮 疑弘 瞬聖 達生檎 惟績 曽戟
// 叔鳶判呪 硝形爽奄

int main(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0; //叔鳶 判呪


	while (1)
	{
		int select1 = 0; // 紫遂切亜 識澱廃 坦製 呪
		int select2 = 0; // 紫遂切亜 識澱廃 砧腰属 呪

		printAnimals(); //疑弘 是帖 窒径
		printQuestion(); //庚薦 窒径(朝球 走亀)
		printf("及増聖 朝球研 2鯵 壱牽室推");
		scanf_s("%d, %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// 疎妊拭 背雁馬澗 朝球研 及増嬢 左壱 旭精走 照旭精走 溌昔

		//舛呪 疎妊研 (x,y)稽 痕発
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);
		
		// 旭精 疑弘昔 井酔 
		if (checkAnimal[firstSelect_x][firstSelect_y] == 0 
			&&
			checkAnimal[secondSelect_x][secondSelect_y] == 0
			&&
			arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y]
			)
		{
			printf("\n\n 桜壱! %s 降胃", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}//朝球亜 及増備走 省紹澗走 && 砧 疑弘戚 旭精走
		//陥献 疑弘昔 井酔
		else
		{
			printf("強! 堂携暗蟹 戚耕 及増微 朝球脊艦陥");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]); //湛腰属 疑弘 硝形爽奄
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]); //砧腰属 疑弘 硝形爽奄
			printf("\n\n");

			failCount++;
		}
		// 乞窮 疑弘聖 達紹澗走 食採 1: 凧, 0: 暗憎
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 乞窮 疑弘聖 陥 達紹柔艦陥!\n");
			printf("走榎猿走 恥 %d 腰 叔呪馬心柔艦陥\n", failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "据周戚";
	strAnimal[0] = "馬原";
	strAnimal[0] = "悪焼走";
	strAnimal[0] = "壱丞戚";
	strAnimal[0] = "掬走";

	strAnimal[0] = "坪晦軒";
	strAnimal[0] = "奄鍵";
	strAnimal[0] = "開展";
	strAnimal[0] = "展繕";
	strAnimal[0] = "硲櫛戚";
	
}

void shuffleAnimal()
{
	// けけけけけ
	// けけけけけ
	// けけけけけ
	// けけけけけ

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20; // 0~19紫戚税 収切 鋼発


		//疎妊 是帖稽 痕発馬奄 
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) //朔因娃戚檎 走榎是帖研 鋼発
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	// ex) 19 -> (3,4)
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5; //y研 5稽 蟹勧 害精 蟹袴走葵
}

void printAnimals()
{
                                        
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------------\n\n");
}

void printQuestion()
{
	printf("\n\n(庚薦)\m");
	int seq = 0;
							// seq				// checkAnimal
	// けけけけけ     // 0  1  2  3  4			0 0 0 0 0 (0精 焼送 照達精依, 1精 達精依)
	// けけけけけ =>  // 5  6  7  8  9			1 0 0 0 0
	// けけけけけ	  // 10 11 12 13 14			0 0 0 1 0
	// けけけけけ     // 15 16 17 18 19			0 0 0 0 0

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//朝球研 及増嬢辞 舛岩聖 限宙生檎 疑弘戚硯 窒径
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8d", seq++);
			}
			//舛岩聖 公限宙生檎 急檎 -> 是帖研 蟹展鎧澗 収切
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1; //乞砧 陥 達製
}