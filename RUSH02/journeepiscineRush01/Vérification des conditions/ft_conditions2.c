// Cette fonction vise a verifier que pour une case donnee, elle verifie bien
// l'ensemble des 6 conditions suivantes : 
// 			- pas d'autre occurence du chiffre sur la ligne
// 			- pas d'autre occurence du chiffre sur la colonne
// 			- adequation avec le col*up 
// 			- adequation avec le col*down
// 			- adequation avec le row*left
// 			- adequation avec le row*right

// Verifie que le chiffre tab[j][i] est conforme avec col(i+1)up 
int verif_chiffre_colup(int **tab, int i, int j, int **tab_int_param)
{
	int col;
	int chiffre_colup;
	
	col = 0;
	chiffre_colup = 1;
	while (col < 3)
	{
		if(tab[col+1][i] > tab[col][i])
		{
			chiffre_colup++;
			col++;
		}
		else
			col++;
	}
	
	if(tab_int_param[1][i] == chiffre_colup)
		return (1);
	else
		return (0);
}



// Verifie que le chiffre tab[j][i] est conforme avec col(i+1)down
int verif_chiffre_coldown(int **tab, int i, int j, int **tab_int_param)
{
	int col;
	int chiffre_coldown;
	
	col = 3;
	chiffre_coldown = 1;
	while (col > 0)
	{
		if(tab[col-1][i] > tab[col][i])
		{
			chiffre_coldown++;
			col--;
		}
		else
			col--;
	}
	
	if(tab_int_param[2][i] == chiffre_coldown)
		return (1);
	else
		return (0);
}


// Verifie que le chiffre tab[j][i] est conforme avec row(j+1)left
int verif_chiffre_rowleft(int **tab, int i, int j, int **tab_int_param)
{
	int lig;
	int chiffre_rowleft;
	
	lig = 0;
	chiffre_rowright = 1;
	while (lig < 3)
	{
		if(tab[j][lig+1] > tab[j][lig])
		{
			chiffre_rowright++;
			lig++;
		}
		else
			lig++;
	}
	
	if(tab_int_param[3][j] == lig)
		return (1);
	else
		return (0);
}


// Verifie que le chiffre tab[j][i] est conforme avec row(j+1)right
int verif_chiffre_rowright(int **tab, int i, int j, int **tab_int_param)
{
	int lig;
	int chiffre_rowright;
	
	lig = 3;
	chiffre_rowright = 1;
	while (lig > 0)
	{
		if(tab[j][lig-1] > tab[j][lig])
		{
			chiffre_rowright++;
			lig--;
		}
		else
			lig--;
	}
	
	if(tab_int_param[4][j] == chiffre_rowright)
		return (1);
	else
		return (0);
}

int	ft_conditions1(int **tab, int i, int j)
{
	if (verif_chiffre_ligne(**tab, i, j) && verif_chiffre_colonne(**tab, i, j))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
