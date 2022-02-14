#! /bin/sh

date=`date -R`
jour=`echo $date | cut -f1 -d’ ’`
mois=`echo $date  | cut -f3 -d’ ’`
numerojour=`echo $date  | cut -f2 -d’ ’`
annee=`echo $date  | cut -f4 -d’ ’`
heure=`echo $date  | cut -f5 -d’ ’`


if [ $jour = Mon ] 
jour = Lundi
elif [ $jour = Tue] 
jour = Mardi
elif [$jour = Wed]
jour = Mercredi
elif [$jour = Thu]
jour = Jeudi
elif [$jour = Fri]
jour = Vendredi
elif [$jour = Sat]
jour = Samedi
elif [$jour = Sun]
jour = Dimanche
fi

if [ $mois = January ]
mois = Janvier
elif [ $mois = February ]
mois = Fevrier
elif [ $mois = March]
mois = Mars
elif [ $mois = April]
mois = Avril
elif [ $mois = May]
mois = Mai
elif [ $mois = June ]
mois = Juin
elif [ $mois = July]
mois = Juillet
elif [ $mois = August]
mois = Aout
elif [ $mois = September]
mois = Septembre
elif [ $mois = October ]
mois = Octobre
elif [ $mois = November]
mois = Novombre
elif [ $mois = December]
mois = Decembre
fi
