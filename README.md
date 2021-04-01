Pentru fiecare cuvant de cautat am folosit un map ca sa ii asociez un index de la 1 la nrCuvDistincte
Am folosit un vector de frecventa pentru cuvintele distincte de cautat
Am luat pe rand substringurile posibile si am verificat daca exista in vectorul de frecv(cu map). Dupa am scazut frecv. Daca, dupa ce am verificat substringuri, vectorul de frecv are numai 0 atunci s-au folosit toate cuvintele si retin pozitia de inceput.
![image](https://user-images.githubusercontent.com/68808448/113337161-12ea7280-9330-11eb-9072-68a09bda83b1.png)
