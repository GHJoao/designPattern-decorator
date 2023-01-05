#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

class pizza{

    protected:

        float preco;
        int kcal;

    public:
        pizza();
        virtual ~pizza() = default;

        void set_kcal(int kcal);
        void set_preco(float preco);

        virtual float get_preco() = 0;
        virtual int get_kcal() = 0;

};

#endif
