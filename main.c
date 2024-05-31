/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:26:58 by enanni            #+#    #+#             */
/*   Updated: 2024/05/30 18:23:59 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ss(void)
{
	double	diam;
	double	vt;
	double	ris;

	printf("Inserisci il diametro: ");
	scanf("%lf", &diam);
	printf("Inserisci vt (m/min): ");
	scanf("%lf", &vt);
	ris = vt * 1000 / (diam * 3.14159);
	printf("S = %.2f giri/min\n\n", ris);
	return ;
}

void	av(void)
{
	double	t;
	double	s;
	double	f;
	double	ris;

	printf("Inserisci avanzamento F: ");
	scanf("%lf", &f);
	printf("Inserisci i giri S: ");
	scanf("%lf", &s);
	printf("Inserisci il numero dei taglienti: ");
	scanf("%lf", &t);
	ris = (f / s) / t;
	printf("fz = %.3f mm/giro per tagliente\n\n", ris);
	return ;
}

void	vt(void)
{
	double	diam;
	double	giri;
	double	ris;

	printf("Inserisci il diametro: ");
	scanf("%lf", &diam);
	printf("Inserisci i giri S: ");
	scanf("%lf", &giri);
	ris = giri * (diam * 3.14159) / 1000;
	printf("vt = %.2f m/min\n\n", ris);
	return ;
}

int	main(void)
{
	int	scelta;

	while (1)
	{
		printf("----------------------------------------\n");
		printf("Calcolatore per parametri di taglio v1.1\n");
		printf("----------------------------------------\n\n\n");
		printf("Scegli un'opzione:\n\n");
		printf("1. Ottieni velocita' di taglio (m/min)\n");
		printf("2. Ottieni avanzamento al tagliente (mm/giro)\n");
		printf("3. Ottieni n giri (giri/min)\n");
		printf("\n");
		scanf("%d", &scelta);
		if (scelta > 3 || scelta == 0)
			printf("Inserisci un numero valido...\n");
		if (scelta == 1)
			vt();
		else if (scelta == 2)
			av();
		else if (scelta == 3)
			ss();
		system("pause");
		system("cls");
	}
}
