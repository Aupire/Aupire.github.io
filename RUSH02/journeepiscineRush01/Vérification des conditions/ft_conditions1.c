// Cette fonction vise a verifier que pour une case donnee, elle verifie bien
// l'ensemble des 6 conditions suivantes : 
// 			- pas d'autre occurence du chiffre sur la ligne
// 			- pas d'autre occurence du chiffre sur la colonne
// 			- adequation avec le col*up 
// 			- adequation avec le col*down
// 			- adequation avec le row*left
// 			- adequation avec le row*right

// Verifie que le chiffre tab[j][i] n'est pas ailleurs sur la ligne i
int verif_chiffre_ligne(int **tab, int i, int j)
{
	int verif;
	int ligne;

	verif = 0;
	ligne = 0;
	while (ligne <= 3)
	{
		if(ligne != i)
		{
			if (tab[j][ligne] == tab[j][i])
				return verif;
				break;
			else 
				ligne++;
		}
		else 
			ligne++;
	}
	verif = 1;
	return verif;
}

// Verifie que le chiffre tab[j][i] n'est pas ailleurs sur la colonne j
int verif_chiffre_colonne(int **tab, int i, int j)
{
	int verif;
	int colonne;

	verif = 0;
	colonne = 0;
	while (colonne <= 3)
	{
		if(colonne != j)
		{
			if (tab[colonne][i] == tab[j][i])
				return verif;
				break;
			else 
				colonne++;
		}
		else 
			colonne++;
	}
	verif = 1;
	return verif;
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