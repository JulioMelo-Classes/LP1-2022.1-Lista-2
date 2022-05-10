#ifndef Casa_hpp
#define Casa_hpp

#include <iostream>

/**
 * A classe Casa, contém informação do dono e número usando a forma CamelCase;
 * Aqui poderia vir uma descrição mais detalhada da classe casa, mas como ela é simples
 * essa descrição não é necessária. No entanto, o doxygen trata essa parte de forma diferente
 * da primeira linha. Os métodos devem ser implementados no arquivo Casa.cpp.
 */
class Casa{
    
    private:
        int numero; //!< número da casa. O número deve ser setado pela classe Rua.
        double areaConstruida; //!< áera construída da casa
        double areaTotal; //!< áera total do terreno
        bool ocupada; //!< indica se a casa está ocupada ou não
    
    public:
        /**
         * Construtor da classe casa.
         */
        Casa(double area_construida, double area_total);

        /**
         * Getter do número da casa.
         * @return o número da casa.
         */
        int getNumero();
        
        /**
         * Setter do número da casa
         * @param n o número que deve ser atribuído à casa
         */
        void setNumero(int n);

        /**
         * Setter do ocupada
         * @param ocupada o estado da casa, desocupada (F) / ocupada(T)
         */
        void setOcupada(bool ocupada);

        /**
         * Getter do estado da casa
         * @return T se ocupada, F caso contrário.
         */
        bool isOcupada();

};
#endif