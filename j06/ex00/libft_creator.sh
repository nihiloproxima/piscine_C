gcc -c *.c
ar rc libft.a *.o
ranlib libft.a
echo "Librairie créée, suppression des .o.."
rm -rf *.o
echo "Terminé !"
