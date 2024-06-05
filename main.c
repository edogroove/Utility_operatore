/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanni <enanni@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:26:58 by enanni            #+#    #+#             */
/*   Updated: 2024/06/05 02:57:02 by enanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	calc_tutto(void)
{
	double	vt;
	double	fz;
	double	tagl;
	double	diam;
	double	s;
	double	f;

	printf("Inserisci la velocita' di taglio desiderata: ");
	scanf("%lf", &vt);
	printf("Inserisci l'avanzamento a tagliente desiderato: ");
	scanf("%lf", &fz);
	printf("Inserisci il numero dei taglienti: ");
	scanf("%lf", &tagl);
	printf("Inserisci il diametro: ");
	scanf("%lf", &diam);
	s = vt * 1000 / (diam * 3.14159);
	f = fz * tagl * s;
	printf("giri S: %.2f\n", s);
	printf("avanzamento F: %.2f\n", f);
}

void	calc_golf(void)
{
	double	diam;
	double	gradi;
	double	ris;

	printf("Inserisci il diametro: ");
	scanf("%lf", &diam);
	printf("Inserisci i gradi: ");
	scanf("%lf", &gradi);
	ris = diam * 3.14159 / 360 * gradi;
	printf("Distanza dal golfare: %.1f mm\n\n", ris);
}

void	calc_av(void)
{
	double	giri;
	double	av;
	double	ris;

	printf("Inserisci i giri: ");
	scanf("%lf", &giri);
	printf("Inserisci avanzamento mm/giro: ");
	scanf("%lf", &av);
	ris = giri * av;
	printf("F = %.2f\n\n", ris);
}

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
		printf("----------------------\n");
		printf("Utility operatore v1.3\n");
		printf("----------------------\n\n\n");
		printf("Scegli un'opzione:\n\n");
		printf("1. Ottieni velocita' di taglio vt (m/min)\n");
		printf("2. Ottieni avanzamento al tagliente fz (mm/giro)\n");
		printf("3. Calcola n giri S (giri/min)\n");
		printf("4. Calcola avanzamento F (mm/giro)\n");
		printf("5. Ricava tutti i parametri\n");
		printf("6. Calcolo distanza del golfare di riferimento\n");
		printf("\n");
		scanf("%d", &scelta);
		if (scelta > 6 || scelta == 0)
			printf("Inserisci un numero valido...\n");
		if (scelta == 1)
			vt();
		else if (scelta == 2)
			av();
		else if (scelta == 3)
			ss();
		else if (scelta == 4)
			calc_av();
		else if (scelta == 5)
			calc_tutto();
		else if (scelta == 6)
			calc_golf();
		system("pause");
		system("cls");
	}
}
