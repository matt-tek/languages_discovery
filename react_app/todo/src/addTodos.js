import React, {Component} from 'react'

class AddTodos extends Component {
    state = {
        content: ''
    }
    getChanges = (e) => {
        this.setState({
            content: e.target.value
        })
    }
    getSubmit = (e) => {
        e.preventDefault();
        this.props.addTodo(this.state);
        this.setState({
            content: ''
        })
    }
    render() {
        return (
            <div>
                <form onSubmit={this.getSubmit}>
                    <input type="text" onChange={this.getChanges}></input>
                </form>
            </div>
        )
    }
}

export default AddTodos