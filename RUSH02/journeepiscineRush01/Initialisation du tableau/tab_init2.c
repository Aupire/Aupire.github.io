
int	**tab_init2(char **tab_jeu, int i, int j, int **tab_param)
{
// initialisation des cases pour les valeurs faciles de col*up, col*down, row*left, row*right

	int k;
	int m;

// initialisation pour colup en valeur 1
	k = 0;
	m = 0;
	while (tab_param[0][k])
	{
		if (tab_param[0][k] == 4)
		{
			while (m < 4) 
			{
				tab_jeu[m][k] = (m+1);
				m++;
			}
		}
		m = 0;
		k++;
	}
	
// initialisation pour coldown en valeur 1
	k = 0;
	m = 3;
	while (tab_param[1][k])
	{
		if (tab_param[1][k] == 4)
		{
			while (m >= 0)
			{
				tab_jeu[m][k] = 4 - m;
				m--;
			}
		}
		m = 3;
		k++;
	}	
	
// initialisation pour rowleft en valeur 1
	k = 0;
	m = 0;
	while (tab_param[2][k])
	{
		if (tab_param[2][k] == 4)
		{
			while (m < 4)
			{
				tab_jeu[k][0] = (m+1);
				m++;
			}
		}
		m = 0;
		k++;
	}	
	
// initialisation pour rowright en valeur 1
	k = 0;
	while (tab_param[3][k])
	{
		if (tab_param[3][k] == 1)
		{
			tab_jeu[k][3] = 4;
		}
		k++;
	}	

}