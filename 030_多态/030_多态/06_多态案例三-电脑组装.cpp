#include <iostream>
using namespace std;

class CPU{
	/**
	 * 抽象的CPU类
	 */
public:
	//抽象的计算函数
	virtual void calculate()=0;
};
class GPU{
	/**
	 * 抽象的显卡类
	 */
public:
	//抽象的显示函数
	virtual void display()=0;
};
class MEM{
	/**
	 * 抽象的内存条类
	 */
public:
	//抽象的存储函数
	virtual void storage()=0;
};
class IntelCPU:public CPU{
	/**
	 * 具体厂商的CPU
	 */
public:
	virtual void calculate(){
		cout<<"Intel的CPU在计算"<<endl;
	}
};
class IntelGPU:public GPU{
	/**
	 * 具体的厂商显卡
	 */
public:
	virtual void display(){
		cout<<"Intel的显卡在输出"<<endl;
	}
};
class IntelMEM:public MEM{
	/**
	 * 具体厂商的内存条
	 */
public:
	virtual void storage(){
		cout<<"Intel的内存在工作"<<endl;
	}
};
class AMDCPU:public CPU{
	/**
	 * 具体厂商的CPU
	 */
public:
	virtual void calculate(){
		cout<<"AMD的CPU在计算"<<endl;
	}
};
class AMDGPU:public GPU{
	/**
	 * 具体的厂商显卡
	 */
public:
	virtual void display(){
		cout<<"AMD的显卡在输出"<<endl;
	}
};
class AMDMEM:public MEM{
	/**
	 * 具体厂商的内存条
	 */
public:
	virtual void storage(){
		cout<<"AMD的内存在工作"<<endl;
	}
};
class Computer{
	/**
	 *电脑类
	 * 
	 */
private:
	CPU *m_cpu;//CPU零件指针
	GPU *m_gpu;//显卡指针
	MEM *m_mem;//内存条指针
public:
	Computer(CPU *cpu,GPU *gpu,MEM *mem){
		m_cpu=cpu;
		m_gpu=gpu;
		m_mem=mem;
	}
	//调用硬件接口的函数
	void work(){
		m_cpu->calculate();
		m_gpu->display();
		m_mem->storage();
	}
	//提供析构函数释放三个零件
	~Computer(){
		if(m_cpu!=NULL){
			delete m_cpu;
			m_cpu=NULL;
		}
		if(m_gpu!=NULL){
			delete m_gpu;
			m_gpu=NULL;
		}
		if(m_mem!=NULL){
			delete m_mem;
			m_mem=NULL;
		}
	}
};
void test01(){
	/**
	 * 测试
	 */
	//第一台电脑
	CPU * inteCpu=new IntelCPU;
	GPU * intelGpu=new IntelGPU;
	MEM * intelMem=new IntelMEM;
	Computer *comp1=new Computer(inteCpu,intelGpu,intelMem);
	comp1->work();
	delete comp1;

	//第二台电脑
	cout<<"-----------------"<<endl;
	Computer *comp2=new Computer(new AMDCPU,new AMDGPU,new AMDMEM);
	comp2->work();
	delete comp2;
	//第三台电脑
	cout<<"-----------------"<<endl;
	Computer *comp3=new Computer(new IntelCPU,new AMDGPU,new IntelMEM);
	comp3->work();
	delete comp3;
}
int main() {
	test01();
	return 0;
}