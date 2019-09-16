// Est-ce que la case est remplie ou vide
// initialisation des cases pour les valeurs faciles de col*up, col*down, row*left, row*right

// initialisation pour colup en valeur 1
int	**tab_init1colup(char **tab_jeu, int i, int j, int **tab_param)
{
	int k;

	k = 0;
	while (tab_param[0][k])
	{
		if (tab_param[0][k] == 1)
		{
			tab_jeu[0][k] = 4;
		}
		k++;
	}
	return (**tab_jeu);
}
	
// initialisation pour coldown en valeur 1
int	**tab_init1coldown(char **tab_jeu, int i, int j, int **tab_param)
{
	k = 0;
	while (tab_param[1][k])
	{
		if (tab_param[1][k] == 1)
		{
			tab_jeu[3][k] = 4;
		}
		k++;
	}	
	return (**tab_jeu);
}
	
	
// initialisation pour rowleft en valeur 1
int	**tab_init1rowleft(char **tab_jeu, int i, int j, int **tab_param)
{
	k = 0;
	while (tab_param[2][k])
	{
		if (tab_param[2][k] == 1)
		{
			tab_jeu[k][0] = 4;
		}
		k++;
	}
	return (**tab_jeu);
}
	
// initialisation pour rowright en valeur 1
int	**tab_init1rowright(char **tab_jeu, int i, int j, int **tab_param)
{
	k = 0;
	while (tab_param[3][k])
	{
		if (tab_param[3][k] == 1)
		{
			tab_jeu[k][3] = 4;
		}
		k++;
	}
	return (**tab_jeu);
}

int	**tab_init1(char **tab_jeu, int i, int j, int **tab_param)
{
	tab_jeu = tab_init1colup(tab_jeu, i, j, tab_param);
	tab_jeu = tab_init1coldown(tab_jeu, i, j, tab_param);
	tab_jeu = tab_init1rowleft(tab_jeu, i, j, tab_param);
	tab_jeu = tab_init1rowright(tab_jeu, i, j, tab_param);
	
	return (tab_jeu);
}
