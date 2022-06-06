const app = Vue.createApp({
    data(){
        return {
            name:"K Khine Lynn",
            age:29,
            profile:"images/profile.png",
            para: '<span style="color: red;">This is color red!</span>',
            seen: true,
            mark: 30,

    }      
    },
    methods:{
        reverse(){
            this.name = this.name.split('').reverse().join('')
        },
    }
    
})